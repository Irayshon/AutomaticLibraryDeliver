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

#ifndef _TAO_PIDL_MESSAGINGC_UO3JRQ_H_
#define _TAO_PIDL_MESSAGINGC_UO3JRQ_H_

#include /**/ "ace/pre.h"

#ifndef TAO_MESSAGING_SAFE_INCLUDE
#error You should not include MessagingC.h, use tao/Messaging/Messaging.h
#endif /* TAO_MESSAGING_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/Messaging/Messaging_SyncScope_PolicyC.h"
#include "tao/Messaging/Messaging_RT_PolicyC.h"
#include "tao/Messaging/Messaging_No_ImplC.h"
#include "tao/Messaging/TAO_ExtC.h"
#include "tao/Messaging/PollableC.h"
#include "tao/Messaging/ExceptionHolderC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Messaging_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_END_VERSIONED_NAMESPACE_DECL



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:158



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:37

namespace Messaging
{
  // TAO_IDL - Generated from
  // be/be_interface.cpp:750

  

#if !defined (_MESSAGING_REPLYHANDLER__VAR_OUT_CH_)
#define _MESSAGING_REPLYHANDLER__VAR_OUT_CH_

  class ReplyHandler;
  typedef ReplyHandler *ReplyHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        ReplyHandler
      >
    ReplyHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        ReplyHandler
      >
    ReplyHandler_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:42

  

  class TAO_Messaging_Export ReplyHandler
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<ReplyHandler>;
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ReplyHandler_ptr _ptr_type;
    typedef ReplyHandler_var _var_type;
    typedef ReplyHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ReplyHandler_ptr _duplicate (ReplyHandler_ptr obj);

    static void _tao_release (ReplyHandler_ptr obj);

    static ReplyHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static ReplyHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ReplyHandler_ptr _nil (void);

    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    ReplyHandler (void);

    // Concrete non-local interface only.
    ReplyHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    ReplyHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ReplyHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (ReplyHandler (const ReplyHandler &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ReplyHandler (ReplyHandler &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (ReplyHandler &operator= (const ReplyHandler &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ReplyHandler &operator= (ReplyHandler &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:65


} // module Messaging
// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:144

  

#if !defined (_MESSAGING_REPLYHANDLER__ARG_TRAITS_)
#define _MESSAGING_REPLYHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Messaging::ReplyHandler>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ReplyHandler_ptr,
            ::Messaging::ReplyHandler_var,
            ::Messaging::ReplyHandler_out,
            TAO::Objref_Traits<Messaging::ReplyHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
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

#if !defined (_MESSAGING_REPLYHANDLER__TRAITS_)
#define _MESSAGING_REPLYHANDLER__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::Messaging::ReplyHandler>
  {
    static ::Messaging::ReplyHandler_ptr duplicate (
        ::Messaging::ReplyHandler_ptr p);
    static void release (
        ::Messaging::ReplyHandler_ptr p);
    static ::Messaging::ReplyHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Messaging::ReplyHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:43




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messaging::ReplyHandler_ptr );
TAO_Messaging_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messaging::ReplyHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1666



TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "MessagingC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
