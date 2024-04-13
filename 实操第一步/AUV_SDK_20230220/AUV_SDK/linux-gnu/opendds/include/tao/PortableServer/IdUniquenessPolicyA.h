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
// be/be_codegen.cpp:784

#ifndef _TAO_IDL_IDUNIQUENESSPOLICYA_HGH55H_H_
#define _TAO_IDL_IDUNIQUENESSPOLICYA_HGH55H_H_

#include /**/ "ace/pre.h"

#include /**/ "tao/PortableServer/portableserver_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/PortableServer/IdUniquenessPolicyC.h"
#include "tao/AnyTypeCode/PolicyA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:46

namespace PortableServer
{
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_IdUniquenessPolicyValue;
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:36

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_IdUniquenessPolicy;


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:73


} // module PortableServer

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_ch.cpp:38



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_PortableServer_Export void operator<<= (::CORBA::Any &, PortableServer::IdUniquenessPolicyValue);
TAO_PortableServer_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, PortableServer::IdUniquenessPolicyValue &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
