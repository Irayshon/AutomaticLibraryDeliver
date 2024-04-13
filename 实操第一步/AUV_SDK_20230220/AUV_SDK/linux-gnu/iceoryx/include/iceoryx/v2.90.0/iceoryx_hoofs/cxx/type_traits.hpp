// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
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

#ifndef IOX_HOOFS_CXX_TYPE_TRAITS_HPP
#define IOX_HOOFS_CXX_TYPE_TRAITS_HPP

#include <cstdint>
#include <type_traits>

#include "iceoryx_hoofs/cxx/attributes.hpp"
#include "iceoryx_platform/platform_settings.hpp"

namespace iox
{
namespace cxx
{
///
/// @brief Conditionally add const to type T if C has the const qualifier
/// @tparam T is the type to conditionally add the const qualifier
/// @tparam Condition is the type which determines if the const qualifier needs to be added to T
///
template <typename T, typename C>
struct add_const_conditionally
{
    using type = T;
};
template <typename T, typename C>
struct add_const_conditionally<T, const C>
{
    using type = const T;
};
///
/// @brief Helper type for add_const_conditionally which adds const to type T if C has the const qualifier
///
template <typename T, typename C>
using add_const_conditionally_t = typename add_const_conditionally<T, C>::type;

///
/// @brief Helper value to bind a static_assert to a type
/// @code
/// static_assert(always_false_v<Foo>, "Not implemented for the given type!");
/// @endcode
///
template <typename>
constexpr bool always_false_v{false};

///
/// @brief Verifies whether the passed Callable type is in fact invocable with the given arguments
///
template <typename Callable, typename... ArgTypes>
struct is_invocable
{
    // This variant is chosen when Callable(ArgTypes) successfully resolves to a valid type, i.e. is invocable.
    /// @note result_of is deprecated, switch to invoke_result in C++17
    template <typename C, typename... As>
    static constexpr std::true_type test(typename platform::invoke_result<C, As...>::type*) noexcept
    {
        return {};
    }

    // AXIVION Next Construct AutosarC++19_03-A8.4.1 : we require a SFINEA failure case where all
    // parameter types (non invokable ones) are allowed, this can be achieved with variadic arguments
    // This is chosen if Callable(ArgTypes) does not resolve to a valid type.
    template <typename C, typename... As>
    /// @NOLINTNEXTLINE(cert-dcl50-cpp)
    static constexpr std::false_type test(...) noexcept
    {
        return {};
    }

    // Test with nullptr as this can stand in for a pointer to any type.
    static constexpr bool value{decltype(test<Callable, ArgTypes...>(nullptr))::value};
};

///
/// @brief Verifies whether the passed Callable type is in fact invocable with the given arguments
///        and the result of the invocation is convertible to ReturnType.
///
/// @note This is an implementation of std::is_invokable_r (C++17).
///
template <typename ReturnType, typename Callable, typename... ArgTypes>
struct is_invocable_r
{
    template <typename C, typename... As>
    static constexpr std::true_type
    test(std::enable_if_t<
         std::is_convertible<typename platform::invoke_result<C, As...>::type, ReturnType>::value>*) noexcept
    {
        return {};
    }
    // AXIVION Next Construct AutosarC++19_03-A8.4.1 : we require a SFINEA failure case where all
    // parameter types (non invokable ones) are allowed, this can be achieved with variadic arguments
    template <typename C, typename... As>
    /// @NOLINTNEXTLINE(cert-dcl50-cpp)
    static constexpr std::false_type test(...) noexcept
    {
        return {};
    }

    // Test with nullptr as this can stand in for a pointer to any type.
    static constexpr bool value{decltype(test<Callable, ArgTypes...>(nullptr))::value};
};

///
/// @brief Check whether T is a function pointer with arbitrary signature
///
template <typename T>
struct is_function_pointer : std::false_type
{
};
template <typename ReturnType, typename... ArgTypes>
struct is_function_pointer<ReturnType (*)(ArgTypes...)> : std::true_type
{
};

template <uint64_t Capacity>
class string;

/// @brief struct to check whether an argument is a char array
template <typename T>
struct is_char_array : std::false_type
{
};

template <uint64_t N>
// AXIVION Next Construct AutosarC++19_03-A18.1.1 : struct used to deduce char array types, it
// does not use them
/// @NOLINTNEXTLINE(hicpp-avoid-c-arrays,cppcoreguidelines-avoid-c-arrays)
struct is_char_array<char[N]> : std::true_type
{
};

/// @brief struct to check whether an argument is a cxx string
template <typename T>
struct is_cxx_string : std::false_type
{
};

template <uint64_t N>
struct is_cxx_string<::iox::cxx::string<N>> : std::true_type
{
};

/// @brief Maps a sequence of any types to the type void
template <typename...>
using void_t = void;


//////////////////
/// BEGIN TypeInfo
//////////////////

/// @brief Provides a translation from a type into its human readable name
/// NOLINTJUSTIFICATION The name should be stored in a compile time variable. Access is always
///   safe since it is null terminated and always constant. Other alternatives are not available
///   at compile time.
/// NOLINTBEGIN(hicpp-avoid-c-arrays, cppcoreguidelines-avoid-c-arrays)

template <typename T>
struct TypeInfo
{
    static_assert(always_false_v<T>, "unknown type");
    static constexpr const char NAME[] = "unknown type";
};
template <typename T>
constexpr const char TypeInfo<T>::NAME[];

template <>
struct TypeInfo<int8_t>
{
    static constexpr const char NAME[] = "int8_t";
};

template <>
struct TypeInfo<int16_t>
{
    static constexpr const char NAME[] = "int16_t";
};

template <>
struct TypeInfo<int32_t>
{
    static constexpr const char NAME[] = "int32_t";
};

template <>
struct TypeInfo<int64_t>
{
    static constexpr const char NAME[] = "int64_t";
};

template <>
struct TypeInfo<uint8_t>
{
    static constexpr const char NAME[] = "uint8_t";
};

template <>
struct TypeInfo<uint16_t>
{
    static constexpr const char NAME[] = "uint16_t";
};

template <>
struct TypeInfo<uint32_t>
{
    static constexpr const char NAME[] = "uint32_t";
};

template <>
struct TypeInfo<uint64_t>
{
    static constexpr const char NAME[] = "uint64_t";
};

template <>
struct TypeInfo<bool>
{
    static constexpr const char NAME[] = "bool";
};

template <>
struct TypeInfo<char>
{
    static constexpr const char NAME[] = "char";
};

template <>
struct TypeInfo<float>
{
    static constexpr const char NAME[] = "float";
};

template <>
struct TypeInfo<double>
{
    static constexpr const char NAME[] = "double";
};

template <>
struct TypeInfo<long double>
{
    static constexpr const char NAME[] = "long double";
};

template <uint64_t>
class string;

template <uint64_t N>
struct TypeInfo<iox::cxx::string<N>>
{
    static constexpr const char NAME[] = "string";
};
template <uint64_t N>
constexpr const char TypeInfo<iox::cxx::string<N>>::NAME[];
/// NOLINTEND(hicpp-avoid-c-arrays, cppcoreguidelines-avoid-c-arrays)
//////////////////
/// END TypeInfo
//////////////////

} // namespace cxx
} // namespace iox

#endif // IOX_HOOFS_CXX_TYPE_TRAITS_HPP
