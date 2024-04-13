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
// be/be_codegen.cpp:597

#ifndef _TAO_IDL_PORTABLESERVER_POLICYS_T_XOAWIP_H_
#define _TAO_IDL_PORTABLESERVER_POLICYS_T_XOAWIP_H_

#include /**/ "ace/pre.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_root/root_sth.cpp:67

namespace POA_CORBA
{
  // TAO_IDL - Generated from
  // be/be_visitor_interface/tie_sh.cpp:73

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  Policy_tie : public Policy
  {
  public:
    /// the T& ctor
    Policy_tie (T &t);
    /// ctor taking a POA
    Policy_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    Policy_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    Policy_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~Policy_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);
    // TAO_IDL - Generated from
    // be/be_visitor_operation/tie_sh.cpp:53

    ::CORBA::PolicyType policy_type (
      void);
    // TAO_IDL - Generated from
    // be/be_visitor_operation/tie_sh.cpp:53

    ::CORBA::Policy_ptr copy (
      void);
    // TAO_IDL - Generated from
    // be/be_visitor_operation/tie_sh.cpp:53

    void destroy (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    Policy_tie (const Policy_tie &);
    void operator= (const Policy_tie &);
  };
} // module CORBA
// TAO_IDL - Generated from
// be/be_codegen.cpp:1808



TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "PolicyS_T.cpp"
#endif /* defined REQUIRED SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("PolicyS_T.cpp")
#endif /* defined REQUIRED PRAGMA */

#include /**/ "ace/post.h"
#endif /* ifndef */

