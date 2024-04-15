// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p25
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:151

#ifndef _TAO_IDL_RTECBASEC_ZBDDVI_H_
#define _TAO_IDL_RTECBASEC_ZBDDVI_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/svc_utils_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Svc_Utils_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_END_VERSIONED_NAMESPACE_DECL



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:37

namespace RtecBase
{
  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:46

  enum Dependency_Type_t
  {
    ONE_WAY_CALL,
    TWO_WAY_CALL
  };

  typedef Dependency_Type_t &Dependency_Type_t_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_Dependency_Type_t;
  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:369

  typedef ::CORBA::Long handle_t;
  typedef ::CORBA::Long_out handle_t_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_handle_t;
  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:46

  enum Dependency_Enabled_Type_t
  {
    DEPENDENCY_DISABLED,
    DEPENDENCY_ENABLED,
    DEPENDENCY_NON_VOLATILE
  };

  typedef Dependency_Enabled_Type_t &Dependency_Enabled_Type_t_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_Dependency_Enabled_Type_t;
  // TAO_IDL - Generated from
  // be/be_type.cpp:260

  

  struct Dependency_Info;

  typedef
    ::TAO_Fixed_Var_T<
        Dependency_Info
      >
    Dependency_Info_var;

  typedef
    Dependency_Info &
    Dependency_Info_out;

  
  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:50

  

  struct TAO_Svc_Utils_Export Dependency_Info
  {
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef Dependency_Info_var _var_type;
    typedef Dependency_Info_out _out_type;

    static void _tao_any_destructor (void *);
    
    RtecBase::Dependency_Type_t dependency_type;
    ::CORBA::Long number_of_calls;
    RtecBase::handle_t rt_info;
    RtecBase::handle_t rt_info_depended_on;
    RtecBase::Dependency_Enabled_Type_t enabled;
  };
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_Dependency_Info;
  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:369

  typedef ::CORBA::Long OS_Priority;
  typedef ::CORBA::Long_out OS_Priority_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_OS_Priority;
  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:369

  typedef ::CORBA::Long Preemption_Priority_t;
  typedef ::CORBA::Long_out Preemption_Priority_t_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_Preemption_Priority_t;
  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:369

  typedef ::CORBA::Long Preemption_Subpriority_t;
  typedef ::CORBA::Long_out Preemption_Subpriority_t_out;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_Svc_Utils_Export ::CORBA::TypeCode_ptr const _tc_Preemption_Subpriority_t;


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:65


} // module RtecBase
// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:892

  

  template<>
  class Arg_Traits< ::RtecBase::Dependency_Type_t>
    : public
        Basic_Arg_Traits_T<
            ::RtecBase::Dependency_Type_t,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:892

  

  template<>
  class Arg_Traits< ::RtecBase::Dependency_Enabled_Type_t>
    : public
        Basic_Arg_Traits_T<
            ::RtecBase::Dependency_Enabled_Type_t,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::RtecBase::Dependency_Info>
    : public
        Fixed_Size_Arg_Traits_T<
            ::RtecBase::Dependency_Info,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_ch.cpp:38



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_Svc_Utils_Export void operator<<= (::CORBA::Any &, RtecBase::Dependency_Type_t);
TAO_Svc_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RtecBase::Dependency_Type_t &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_ch.cpp:38



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_Svc_Utils_Export void operator<<= (::CORBA::Any &, RtecBase::Dependency_Enabled_Type_t);
TAO_Svc_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RtecBase::Dependency_Enabled_Type_t &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:44



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_Svc_Utils_Export void operator<<= (::CORBA::Any &, const ::RtecBase::Dependency_Info &); // copying version
TAO_Svc_Utils_Export void operator<<= (::CORBA::Any &, ::RtecBase::Dependency_Info*); // noncopying version
TAO_Svc_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::RtecBase::Dependency_Info *&); // deprecated
TAO_Svc_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::RtecBase::Dependency_Info *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:36



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Svc_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, RtecBase::Dependency_Type_t _tao_enumerator);
TAO_Svc_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, RtecBase::Dependency_Type_t &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:36



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Svc_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, RtecBase::Dependency_Enabled_Type_t _tao_enumerator);
TAO_Svc_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, RtecBase::Dependency_Enabled_Type_t &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Svc_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const RtecBase::Dependency_Info &);
TAO_Svc_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, RtecBase::Dependency_Info &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1666



TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "RtecBaseC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
