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

#ifndef _TAO_IDL_DDSDYNAMICTYPESUPPORTC_KICKF0_H_
#define _TAO_IDL_DDSDYNAMICTYPESUPPORTC_KICKF0_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "dds/DCPS/dcps_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
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
#include /**/ "dds/Versioned_Namespace.h"

#include "dds/DdsDynamicDataC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsPublicationC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO OpenDDS_Dcps_Export

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



OPENDDS_END_VERSIONED_NAMESPACE_DECL



OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:37

namespace DDS
{
  // TAO_IDL - Generated from
  // be/be_interface.cpp:750

  

#if !defined (_DDS_DYNAMICTYPESUPPORTINTERF__VAR_OUT_CH_)
#define _DDS_DYNAMICTYPESUPPORTINTERF__VAR_OUT_CH_

  class DynamicTypeSupportInterf;
  typedef DynamicTypeSupportInterf *DynamicTypeSupportInterf_ptr;

  typedef
    TAO_Objref_Var_T<
        DynamicTypeSupportInterf
      >
    DynamicTypeSupportInterf_var;
  
  typedef
    TAO_Objref_Out_T<
        DynamicTypeSupportInterf
      >
    DynamicTypeSupportInterf_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:42

  

  class OpenDDS_Dcps_Export DynamicTypeSupportInterf
    : public virtual ::DDS::TypeSupport
  
  {
  public:
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef DynamicTypeSupportInterf_ptr _ptr_type;
    typedef DynamicTypeSupportInterf_var _var_type;
    typedef DynamicTypeSupportInterf_out _out_type;

    // The static operations.
    static DynamicTypeSupportInterf_ptr _duplicate (DynamicTypeSupportInterf_ptr obj);

    static void _tao_release (DynamicTypeSupportInterf_ptr obj);

    static DynamicTypeSupportInterf_ptr _narrow (::CORBA::Object_ptr obj);
    static DynamicTypeSupportInterf_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DynamicTypeSupportInterf_ptr _nil (void);

    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DynamicTypeSupportInterf (void);

    

    virtual ~DynamicTypeSupportInterf (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (DynamicTypeSupportInterf (const DynamicTypeSupportInterf &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DynamicTypeSupportInterf (DynamicTypeSupportInterf &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (DynamicTypeSupportInterf &operator= (const DynamicTypeSupportInterf &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DynamicTypeSupportInterf &operator= (DynamicTypeSupportInterf &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // be/be_interface.cpp:750

  

#if !defined (_DDS_DYNAMICDATAWRITER__VAR_OUT_CH_)
#define _DDS_DYNAMICDATAWRITER__VAR_OUT_CH_

  class DynamicDataWriter;
  typedef DynamicDataWriter *DynamicDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        DynamicDataWriter
      >
    DynamicDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        DynamicDataWriter
      >
    DynamicDataWriter_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:42

  

  class OpenDDS_Dcps_Export DynamicDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:
    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef DynamicDataWriter_ptr _ptr_type;
    typedef DynamicDataWriter_var _var_type;
    typedef DynamicDataWriter_out _out_type;

    // The static operations.
    static DynamicDataWriter_ptr _duplicate (DynamicDataWriter_ptr obj);

    static void _tao_release (DynamicDataWriter_ptr obj);

    static DynamicDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static DynamicDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DynamicDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      ::DDS::DynamicData_ptr instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      ::DDS::DynamicData_ptr instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      ::DDS::DynamicData_ptr instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      ::DDS::DynamicData_ptr instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      ::DDS::DynamicData_ptr instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      ::DDS::DynamicData_ptr instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      ::DDS::DynamicData_ptr instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      ::DDS::DynamicData_ptr instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::DDS::DynamicData_ptr & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      ::DDS::DynamicData_ptr instance_data) = 0;

    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DynamicDataWriter (void);

    

    virtual ~DynamicDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (DynamicDataWriter (const DynamicDataWriter &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DynamicDataWriter (DynamicDataWriter &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (DynamicDataWriter &operator= (const DynamicDataWriter &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DynamicDataWriter &operator= (DynamicDataWriter &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:65


} // module DDS
// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_DDS_DYNAMICTYPESUPPORTINTERF__TRAITS_)
#define _DDS_DYNAMICTYPESUPPORTINTERF__TRAITS_

  template<>
  struct OpenDDS_Dcps_Export Objref_Traits< ::DDS::DynamicTypeSupportInterf>
  {
    static ::DDS::DynamicTypeSupportInterf_ptr duplicate (
        ::DDS::DynamicTypeSupportInterf_ptr p);
    static void release (
        ::DDS::DynamicTypeSupportInterf_ptr p);
    static ::DDS::DynamicTypeSupportInterf_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DDS::DynamicTypeSupportInterf_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DDS_DYNAMICDATAWRITER__TRAITS_)
#define _DDS_DYNAMICDATAWRITER__TRAITS_

  template<>
  struct OpenDDS_Dcps_Export Objref_Traits< ::DDS::DynamicDataWriter>
  {
    static ::DDS::DynamicDataWriter_ptr duplicate (
        ::DDS::DynamicDataWriter_ptr p);
    static void release (
        ::DDS::DynamicDataWriter_ptr p);
    static ::DDS::DynamicDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DDS::DynamicDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1666



OPENDDS_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "DdsDynamicTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
