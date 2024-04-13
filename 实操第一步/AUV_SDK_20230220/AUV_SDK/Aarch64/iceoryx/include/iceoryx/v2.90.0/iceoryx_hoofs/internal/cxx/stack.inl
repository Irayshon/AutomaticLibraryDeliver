// Copyright (c) 2021 - 2022 by Apex.AI Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
#ifndef IOX_HOOFS_CXX_STACK_INL
#define IOX_HOOFS_CXX_STACK_INL

#include "iceoryx_hoofs/cxx/stack.hpp"

namespace iox
{
namespace cxx
{
template <typename T, uint64_t Capacity>
inline stack<T, Capacity>& stack<T, Capacity>::copy(const stack& rhs) noexcept
{
    uint64_t i{0};
    const uint64_t rhsSize{rhs.size()};
    const uint64_t minSize{algorithm::minVal(m_size, rhsSize)};

    // copy assignment
    for (; i < minSize; i++)
    {
        getUnchecked(i) = rhs.getUnchecked(i);
    }
    // copy c'tor
    for (; i < rhsSize; i++)
    {
        // AXIVION Next Line AutosarC++19_03-A18.5.2 : false positive, it is a placement new
        new (&m_data[i]) T(rhs.getUnchecked(i));
    }
    // delete remaining elements
    clearFrom(i);

    m_size = rhsSize;

    return *this;
}

template <typename T, uint64_t Capacity>
inline stack<T, Capacity>& stack<T, Capacity>::move(stack&& rhs) noexcept
{
    uint64_t i{0};
    const uint64_t rhsSize{rhs.size()};
    const uint64_t minSize{algorithm::minVal(m_size, rhsSize)};

    // move assignment
    for (; i < minSize; i++)
    {
        getUnchecked(i) = std::move(rhs.getUnchecked(i));
    }
    // move c'tor
    for (; i < rhsSize; i++)
    {
        // AXIVION Next Line AutosarC++19_03-A18.5.2 : false positive, it is a placement new
        new (&m_data[i]) T(std::move(rhs.getUnchecked(i)));
    }
    // delete remaining elements
    clearFrom(i);

    m_size = rhsSize;
    rhs.clear();

    return *this;
}

// AXIVION Next Construct AutosarC++19_03-A12.6.1 : the remaining m_data fields are explicitly initialized when a new
// element is pushed
// NOLINTNEXTLINE(cppcoreguidelines-pro-type-member-init, hicpp-member-init)
template <typename T, uint64_t Capacity>
inline stack<T, Capacity>::stack(const stack& rhs) noexcept
{
    copy(rhs);
}

// AXIVION Next Construct AutosarC++19_03-A12.6.1 : the remaining m_data fields are explicitly initialized when a new
// element is pushed
// NOLINTNEXTLINE(cppcoreguidelines-pro-type-member-init, hicpp-member-init)
template <typename T, uint64_t Capacity>
inline stack<T, Capacity>::stack(stack&& rhs) noexcept
{
    move(std::move(rhs));
}

template <typename T, uint64_t Capacity>
inline stack<T, Capacity>& stack<T, Capacity>::operator=(const stack& rhs) noexcept
{
    if (this == &rhs)
    {
        return *this;
    }
    // NOLINTNEXTLINE(cppcoreguidelines-c-copy-assignment-signature) copy() returns *this
    return copy(rhs);
}

template <typename T, uint64_t Capacity>
inline stack<T, Capacity>& stack<T, Capacity>::operator=(stack&& rhs) noexcept
{
    if (this == &rhs)
    {
        return *this;
    }
    // NOLINTNEXTLINE(cppcoreguidelines-c-copy-assignment-signature) copy() returns *this
    return move(std::move(rhs));
}

template <typename T, uint64_t Capacity>
inline stack<T, Capacity>::~stack() noexcept
{
    clear();
}

template <typename T, uint64_t Capacity>
inline T& stack<T, Capacity>::getUnchecked(const uint64_t index) noexcept
{
    // AXIVION Next Construct AutosarC++19_03-A5.2.3 : const cast to avoid code duplication
    // NOLINTNEXTLINE(cppcoreguidelines-pro-type-const-cast)
    return const_cast<T&>(const_cast<const stack<T, Capacity>*>(this)->getUnchecked(index));
}

template <typename T, uint64_t Capacity>
inline const T& stack<T, Capacity>::getUnchecked(const uint64_t index) const noexcept
{
    // AXIVION Next Construct AutosarC++19_03-A5.2.4 : reinterpret_cast is safe since the size and the alignment of each
    // array element is guaranteed
    // NOLINTNEXTLINE(cppcoreguidelines-pro-type-reinterpret-cast)
    return *reinterpret_cast<const T*>(&m_data[index]);
}

template <typename T, uint64_t Capacity>
inline cxx::optional<T> stack<T, Capacity>::pop() noexcept
{
    if (m_size == 0U)
    {
        return cxx::nullopt;
    }

    // AXIVION Next Construct AutosarC++19_03-A5.2.4 : low level memory management with access to the topmost element on
    // the untyped buffer; reinterpret_cast is safe since the size and the alignment of each array element is guaranteed
    // NOLINTNEXTLINE(cppcoreguidelines-pro-type-reinterpret-cast)
    return *reinterpret_cast<T*>(&m_data[--m_size]);
}

template <typename T, uint64_t Capacity>
template <typename... Targs>
inline bool stack<T, Capacity>::push(Targs&&... args) noexcept
{
    if (m_size >= Capacity)
    {
        return false;
    }

    // AXIVION Next Line AutosarC++19_03-A18.5.10 : every entry of m_data is aligned to alignof(T)
    new (&m_data[m_size++]) T(std::forward<Targs>(args)...);
    return true;
}

template <typename T, uint64_t Capacity>
inline void stack<T, Capacity>::clear() noexcept
{
    clearFrom(0);
}

template <typename T, uint64_t Capacity>
inline void stack<T, Capacity>::clearFrom(const uint64_t index) noexcept
{
    while (m_size > index)
    {
        getUnchecked(--m_size).~T();
    }
}

template <typename T, uint64_t Capacity>
inline uint64_t stack<T, Capacity>::size() const noexcept
{
    return m_size;
}

template <typename T, uint64_t Capacity>
inline constexpr uint64_t stack<T, Capacity>::capacity() noexcept
{
    return Capacity;
}


} // namespace cxx
} // namespace iox

#endif // IOX_HOOFS_CXX_STACK_INL
