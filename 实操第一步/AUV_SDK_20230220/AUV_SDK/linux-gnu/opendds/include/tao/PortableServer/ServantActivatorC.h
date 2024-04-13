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

#ifndef _TAO_PIDL_SERVANTACTIVATORC_3UCHVR_H_
#define _TAO_PIDL_SERVANTACTIVATORC_3UCHVR_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/PortableServer/portableserver_export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

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

  

#if !defined (_PORTABLESERVER_SERVANTACTIVATOR__VAR_OUT_CH_)
#define _PORTABLESERVER_SERVANTACTIVATOR__VAR_OUT_CH_

  class ServantActivator;
  typedef ServantActivator *ServantActivator_ptr;

  typedef
    TAO_Objref_Var_T<
        ServantActivator
      >
    ServantActivator_var;
  
  typedef
    TAO_Objref_Out_T<
        ServantActivator
      >
    ServantActivator_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:42

  

  class TAO_PortableServer_Export ServantActivator
    : public virtual ::PortableServer::ServantManager
  
  {
  public:
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ServantActivator_ptr _ptr_type;
    typedef ServantActivator_var _var_type;
    typedef ServantActivator_out _out_type;

    // The static operations.
    static ServantActivator_ptr _duplicate (ServantActivator_ptr obj);

    static void _tao_release (ServantActivator_ptr obj);

    static ServantActivator_ptr _narrow (::CORBA::Object_ptr obj);
    static ServantActivator_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ServantActivator_ptr _nil (void);

    virtual ::PortableServer::Servant incarnate (
      const ::PortableServer::ObjectId & oid,
      ::PortableServer::POA_ptr adapter) = 0;

    virtual void etherealize (
      const ::PortableServer::ObjectId & oid,
      ::PortableServer::POA_ptr adapter,
      ::PortableServer::Servant serv,
      ::CORBA::Boolean cleanup_in_progress,
      ::CORBA::Boolean remaining_activations) = 0;

    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ServantActivator (void);

    

    virtual ~ServantActivator (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (ServantActivator (const ServantActivator &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ServantActivator (ServantActivator &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (ServantActivator &operator= (const ServantActivator &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (ServantActivator &operator= (ServantActivator &&))
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

#if !defined (_PORTABLESERVER_SERVANTACTIVATOR__TRAITS_)
#define _PORTABLESERVER_SERVANTACTIVATOR__TRAITS_

  template<>
  struct TAO_PortableServer_Export Objref_Traits< ::PortableServer::ServantActivator>
  {
    static ::PortableServer::ServantActivator_ptr duplicate (
        ::PortableServer::ServantActivator_ptr p);
    static void release (
        ::PortableServer::ServantActivator_ptr p);
    static ::PortableServer::ServantActivator_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableServer::ServantActivator_ptr p,
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

