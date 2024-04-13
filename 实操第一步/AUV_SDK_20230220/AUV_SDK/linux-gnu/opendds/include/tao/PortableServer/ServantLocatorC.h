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

#ifndef _TAO_PIDL_SERVANTLOCATORC_VL8QHZ_H_
#define _TAO_PIDL_SERVANTLOCATORC_VL8QHZ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PortableServer/portableserver_export.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/orb_typesC.h"
#include "tao/PortableServer/PS_ForwardC.h"
#include "tao/PortableServer/ServantManagerC.h"
#include "tao/PortableServer/ForwardRequestC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_PortableServer_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_END_VERSIONED_NAMESPACE_DECL



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:37

namespace PortableServer
{
  // TAO_IDL - Generated from
  // be/be_interface.cpp:750

  

#if !defined (_PORTABLESERVER_SERVANTLOCATOR__VAR_OUT_CH_)
#define _PORTABLESERVER_SERVANTLOCATOR__VAR_OUT_CH_

  class ServantLocator;
  typedef ServantLocator *ServantLocator_ptr;

  typedef
    TAO_Objref_Var_T<
        ServantLocator
      >
    ServantLocator_var;
  
  typedef
    TAO_Objref_Out_T<
        ServantLocator
      >
    ServantLocator_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:42

  

  class TAO_PortableServer_Export ServantLocator
    : public virtual ::PortableServer::ServantManager
  
  {
  public:
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ServantLocator_ptr _ptr_type;
    typedef ServantLocator_var _var_type;
    typedef ServantLocator_out _out_type;

    // The static operations.
    static ServantLocator_ptr _duplicate (ServantLocator_ptr obj);

    static void _tao_release (ServantLocator_ptr obj);

    static ServantLocator_ptr _narrow (::CORBA::Object_ptr obj);
    static ServantLocator_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ServantLocator_ptr _nil (void);
    // TAO_IDL - Generated from
    // be/be_visitor_native/native_ch.cpp:44

    typedef void *Cookie;
    

    virtual ::PortableServer::Servant preinvoke (
      const ::PortableServer::ObjectId & oid,
      ::PortableServer::POA_ptr adapter,
      const char * operation,
      ::PortableServer::ServantLocator::Cookie & the_cookie) = 0;

    virtual void postinvoke (
      const ::PortableServer::ObjectId & oid,
      ::PortableServer::POA_ptr adapter,
      const char * operation,
      ::PortableServer::ServantLocator::Cookie the_cookie,
      ::PortableServer::Servant the_servant) = 0;

    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ServantLocator (void);

    

    virtual ~ServantLocator (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (ServantLocator (const ServantLocator &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ServantLocator (ServantLocator &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (ServantLocator &operator= (const ServantLocator &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ServantLocator &operator= (ServantLocator &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:65


} // module PortableServer
// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
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

#if !defined (_PORTABLESERVER_SERVANTLOCATOR__TRAITS_)
#define _PORTABLESERVER_SERVANTLOCATOR__TRAITS_

  template<>
  struct TAO_PortableServer_Export Objref_Traits< ::PortableServer::ServantLocator>
  {
    static ::PortableServer::ServantLocator_ptr duplicate (
        ::PortableServer::ServantLocator_ptr p);
    static void release (
        ::PortableServer::ServantLocator_ptr p);
    static ::PortableServer::ServantLocator_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableServer::ServantLocator_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1666



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

