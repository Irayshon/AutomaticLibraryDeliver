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

#ifndef _TAO_IDL_OPENDDSDCPSEXTC_FB38ZF_H_
#define _TAO_IDL_OPENDDSDCPSEXTC_FB38ZF_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "dds/DCPS/dcps_export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"
#include /**/ "dds/Versioned_Namespace.h"

#include "dds/DdsDcpsCoreC.h"
#include "dds/DdsDcpsGuidC.h"

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

namespace OpenDDS
{
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:37

  namespace DCPS
  {
    // TAO_IDL - Generated from
    // be/be_visitor_typedef/typedef_ch.cpp:369

    typedef ::CORBA::ULong ParticipantLocation;
    typedef ::CORBA::ULong_out ParticipantLocation_out;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_LOCAL = 1U;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_ICE = 2U;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_RELAY = 4U;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_LOCAL6 = 8U;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_ICE6 = 16U;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATION_RELAY6 = 32U;
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct ParticipantLocationBuiltinTopicData;

    typedef
      ::TAO_Var_Var_T<
          ParticipantLocationBuiltinTopicData
        >
      ParticipantLocationBuiltinTopicData_var;

    typedef
      ::TAO_Out_T<
          ParticipantLocationBuiltinTopicData
        >
      ParticipantLocationBuiltinTopicData_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export ParticipantLocationBuiltinTopicData
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef ParticipantLocationBuiltinTopicData_var _var_type;
      typedef ParticipantLocationBuiltinTopicData_out _out_type;
      
      DDS::OctetArray16 guid;
      OpenDDS::DCPS::ParticipantLocation location;
      OpenDDS::DCPS::ParticipantLocation change_mask;
      ::TAO::String_Manager local_addr;
      DDS::Time_t local_timestamp;
      ::TAO::String_Manager ice_addr;
      DDS::Time_t ice_timestamp;
      ::TAO::String_Manager relay_addr;
      DDS::Time_t relay_timestamp;
      ::TAO::String_Manager local6_addr;
      DDS::Time_t local6_timestamp;
      ::TAO::String_Manager ice6_addr;
      DDS::Time_t ice6_timestamp;
      ::TAO::String_Manager relay6_addr;
      DDS::Time_t relay6_timestamp;
    };
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const char *const RTPS_RELAY_STUN_PROTOCOL = "RtpsRelay:STUN";
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct ConnectionRecord;

    typedef
      ::TAO_Var_Var_T<
          ConnectionRecord
        >
      ConnectionRecord_var;

    typedef
      ::TAO_Out_T<
          ConnectionRecord
        >
      ConnectionRecord_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export ConnectionRecord
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef ConnectionRecord_var _var_type;
      typedef ConnectionRecord_out _out_type;
      
      DDS::OctetArray16 guid;
      ::TAO::String_Manager address;
      ::TAO::String_Manager protocol;
      DDS::Duration_t latency;
    };
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct InternalThreadBuiltinTopicData;

    typedef
      ::TAO_Var_Var_T<
          InternalThreadBuiltinTopicData
        >
      InternalThreadBuiltinTopicData_var;

    typedef
      ::TAO_Out_T<
          InternalThreadBuiltinTopicData
        >
      InternalThreadBuiltinTopicData_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export InternalThreadBuiltinTopicData
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef InternalThreadBuiltinTopicData_var _var_type;
      typedef InternalThreadBuiltinTopicData_out _out_type;
      
      ::TAO::String_Manager thread_id;
      ::CORBA::Double utilization;
    };
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long LOCATOR_KIND_INVALID = -1;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long LOCATOR_KIND_RESERVED = 0;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long LOCATOR_KIND_UDPv4 = 1;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long LOCATOR_KIND_UDPv6 = 2;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::ULong LOCATOR_PORT_INVALID = 0U;
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct Locator_t;

    typedef
      ::TAO_Fixed_Var_T<
          Locator_t
        >
      Locator_t_var;

    typedef
      Locator_t &
      Locator_t_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export Locator_t
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef Locator_t_var _var_type;
      typedef Locator_t_out _out_type;
      
      ::CORBA::Long kind;
      ::CORBA::ULong port;
      DDS::OctetArray16 address;
    };

    
    // TAO_IDL - Generated from
    // be/be_visitor_sequence/sequence_ch.cpp:101

    

#if !defined (_OPENDDS_DCPS_LOCATORSEQ_CH_)
#define _OPENDDS_DCPS_LOCATORSEQ_CH_

    class LocatorSeq;

    typedef
      ::TAO_FixedSeq_Var_T<
          LocatorSeq
        >
      LocatorSeq_var;

    typedef
      ::TAO_Seq_Out_T<
          LocatorSeq
        >
      LocatorSeq_out;

    class OpenDDS_Dcps_Export LocatorSeq
      : public
          ::TAO::unbounded_value_sequence< Locator_t>
    {
    public:
      LocatorSeq (void);
      LocatorSeq ( ::CORBA::ULong max);
      LocatorSeq (
        ::CORBA::ULong max,
        ::CORBA::ULong length,
        Locator_t* buffer,
        ::CORBA::Boolean release = false);
#if defined (ACE_HAS_CPP11)
      LocatorSeq (const LocatorSeq &) = default;
      LocatorSeq (LocatorSeq &&) = default;
      LocatorSeq& operator= (const LocatorSeq &) = default;
      LocatorSeq& operator= (LocatorSeq &&) = default;
#endif /* ACE_HAS_CPP11 */
      virtual ~LocatorSeq (void);
      
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef LocatorSeq_var _var_type;
      typedef LocatorSeq_out _out_type;
    };

#endif /* end #if !defined */
    // TAO_IDL - Generated from
    // be/be_visitor_typedef/typedef_ch.cpp:369

    typedef ::CORBA::Long MessageCountKind;
    typedef ::CORBA::Long_out MessageCountKind_out;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long MCK_RTPS = 0;
    // TAO_IDL - Generated from
    // be/be_visitor_constant/constant_ch.cpp:37

    

    const CORBA::Long MCK_STUN = 1;
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct MessageCount;

    typedef
      ::TAO_Fixed_Var_T<
          MessageCount
        >
      MessageCount_var;

    typedef
      MessageCount &
      MessageCount_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export MessageCount
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef MessageCount_var _var_type;
      typedef MessageCount_out _out_type;
      
      OpenDDS::DCPS::Locator_t locator;
      OpenDDS::DCPS::MessageCountKind kind;
      ::CORBA::Boolean relay;
      ::CORBA::ULong send_count;
      ::CORBA::ULong send_bytes;
      ::CORBA::ULong send_fail_count;
      ::CORBA::ULong send_fail_bytes;
      ::CORBA::ULong recv_count;
      ::CORBA::ULong recv_bytes;
    };
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct GuidCount;

    typedef
      ::TAO_Fixed_Var_T<
          GuidCount
        >
      GuidCount_var;

    typedef
      GuidCount &
      GuidCount_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export GuidCount
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef GuidCount_var _var_type;
      typedef GuidCount_out _out_type;
      
      OpenDDS::DCPS::GUID_t guid;
      ::CORBA::ULong count;
    };

    
    // TAO_IDL - Generated from
    // be/be_visitor_sequence/sequence_ch.cpp:101

    

#if !defined (_OPENDDS_DCPS_MESSAGECOUNTSEQUENCE_CH_)
#define _OPENDDS_DCPS_MESSAGECOUNTSEQUENCE_CH_

    class MessageCountSequence;

    typedef
      ::TAO_FixedSeq_Var_T<
          MessageCountSequence
        >
      MessageCountSequence_var;

    typedef
      ::TAO_Seq_Out_T<
          MessageCountSequence
        >
      MessageCountSequence_out;

    class OpenDDS_Dcps_Export MessageCountSequence
      : public
          ::TAO::unbounded_value_sequence< MessageCount>
    {
    public:
      MessageCountSequence (void);
      MessageCountSequence ( ::CORBA::ULong max);
      MessageCountSequence (
        ::CORBA::ULong max,
        ::CORBA::ULong length,
        MessageCount* buffer,
        ::CORBA::Boolean release = false);
#if defined (ACE_HAS_CPP11)
      MessageCountSequence (const MessageCountSequence &) = default;
      MessageCountSequence (MessageCountSequence &&) = default;
      MessageCountSequence& operator= (const MessageCountSequence &) = default;
      MessageCountSequence& operator= (MessageCountSequence &&) = default;
#endif /* ACE_HAS_CPP11 */
      virtual ~MessageCountSequence (void);
      
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef MessageCountSequence_var _var_type;
      typedef MessageCountSequence_out _out_type;
    };

#endif /* end #if !defined */

    
    // TAO_IDL - Generated from
    // be/be_visitor_sequence/sequence_ch.cpp:101

    

#if !defined (_OPENDDS_DCPS_GUIDCOUNTSEQUENCE_CH_)
#define _OPENDDS_DCPS_GUIDCOUNTSEQUENCE_CH_

    class GuidCountSequence;

    typedef
      ::TAO_FixedSeq_Var_T<
          GuidCountSequence
        >
      GuidCountSequence_var;

    typedef
      ::TAO_Seq_Out_T<
          GuidCountSequence
        >
      GuidCountSequence_out;

    class OpenDDS_Dcps_Export GuidCountSequence
      : public
          ::TAO::unbounded_value_sequence< GuidCount>
    {
    public:
      GuidCountSequence (void);
      GuidCountSequence ( ::CORBA::ULong max);
      GuidCountSequence (
        ::CORBA::ULong max,
        ::CORBA::ULong length,
        GuidCount* buffer,
        ::CORBA::Boolean release = false);
#if defined (ACE_HAS_CPP11)
      GuidCountSequence (const GuidCountSequence &) = default;
      GuidCountSequence (GuidCountSequence &&) = default;
      GuidCountSequence& operator= (const GuidCountSequence &) = default;
      GuidCountSequence& operator= (GuidCountSequence &&) = default;
#endif /* ACE_HAS_CPP11 */
      virtual ~GuidCountSequence (void);
      
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef GuidCountSequence_var _var_type;
      typedef GuidCountSequence_out _out_type;
    };

#endif /* end #if !defined */
    // TAO_IDL - Generated from
    // be/be_type.cpp:260

    

    struct TransportStatistics;

    typedef
      ::TAO_Var_Var_T<
          TransportStatistics
        >
      TransportStatistics_var;

    typedef
      ::TAO_Out_T<
          TransportStatistics
        >
      TransportStatistics_out;

    
    // TAO_IDL - Generated from
    // be/be_visitor_structure/structure_ch.cpp:50

    

    struct OpenDDS_Dcps_Export TransportStatistics
    {
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef TransportStatistics_var _var_type;
      typedef TransportStatistics_out _out_type;
      
      ::TAO::String_Manager transport;
      OpenDDS::DCPS::MessageCountSequence message_count;
      OpenDDS::DCPS::GuidCountSequence writer_resend_count;
      OpenDDS::DCPS::GuidCountSequence reader_nack_count;
    };

    
    // TAO_IDL - Generated from
    // be/be_visitor_sequence/sequence_ch.cpp:101

    

#if !defined (_OPENDDS_DCPS_TRANSPORTSTATISTICSSEQUENCE_CH_)
#define _OPENDDS_DCPS_TRANSPORTSTATISTICSSEQUENCE_CH_

    class TransportStatisticsSequence;

    typedef
      ::TAO_VarSeq_Var_T<
          TransportStatisticsSequence
        >
      TransportStatisticsSequence_var;

    typedef
      ::TAO_Seq_Out_T<
          TransportStatisticsSequence
        >
      TransportStatisticsSequence_out;

    class OpenDDS_Dcps_Export TransportStatisticsSequence
      : public
          ::TAO::unbounded_value_sequence< TransportStatistics>
    {
    public:
      TransportStatisticsSequence (void);
      TransportStatisticsSequence ( ::CORBA::ULong max);
      TransportStatisticsSequence (
        ::CORBA::ULong max,
        ::CORBA::ULong length,
        TransportStatistics* buffer,
        ::CORBA::Boolean release = false);
#if defined (ACE_HAS_CPP11)
      TransportStatisticsSequence (const TransportStatisticsSequence &) = default;
      TransportStatisticsSequence (TransportStatisticsSequence &&) = default;
      TransportStatisticsSequence& operator= (const TransportStatisticsSequence &) = default;
      TransportStatisticsSequence& operator= (TransportStatisticsSequence &&) = default;
#endif /* ACE_HAS_CPP11 */
      virtual ~TransportStatisticsSequence (void);
      
      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef TransportStatisticsSequence_var _var_type;
      typedef TransportStatisticsSequence_out _out_type;
    };

#endif /* end #if !defined */
  
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:65

  
  } // module OpenDDS::DCPS


// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:65


} // module OpenDDS
// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::ParticipantLocationBuiltinTopicData>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::ParticipantLocationBuiltinTopicData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::ConnectionRecord>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::ConnectionRecord,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::InternalThreadBuiltinTopicData>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::InternalThreadBuiltinTopicData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::Locator_t>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::Locator_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:674

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::LocatorSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::LocatorSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::MessageCount>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::MessageCount,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::GuidCount>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::GuidCount,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:674

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::MessageCountSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::MessageCountSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:674

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::GuidCountSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::GuidCountSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::TransportStatistics>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::TransportStatistics,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:674

  

  template<>
  class Arg_Traits< ::OpenDDS::DCPS::TransportStatisticsSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::OpenDDS::DCPS::TransportStatisticsSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::ParticipantLocationBuiltinTopicData &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::ParticipantLocationBuiltinTopicData &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::ConnectionRecord &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::ConnectionRecord &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::InternalThreadBuiltinTopicData &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::InternalThreadBuiltinTopicData &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Locator_t &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Locator_t &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:67



#if !defined _TAO_CDR_OP_OpenDDS_DCPS_LocatorSeq_H_
#define _TAO_CDR_OP_OpenDDS_DCPS_LocatorSeq_H_

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::LocatorSeq &_tao_sequence);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::LocatorSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_OpenDDS_DCPS_LocatorSeq_H_ */
// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::MessageCount &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::MessageCount &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::GuidCount &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::GuidCount &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:67



#if !defined _TAO_CDR_OP_OpenDDS_DCPS_MessageCountSequence_H_
#define _TAO_CDR_OP_OpenDDS_DCPS_MessageCountSequence_H_

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::MessageCountSequence &_tao_sequence);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::MessageCountSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_OpenDDS_DCPS_MessageCountSequence_H_ */
// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:67



#if !defined _TAO_CDR_OP_OpenDDS_DCPS_GuidCountSequence_H_
#define _TAO_CDR_OP_OpenDDS_DCPS_GuidCountSequence_H_

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::GuidCountSequence &_tao_sequence);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::GuidCountSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_OpenDDS_DCPS_GuidCountSequence_H_ */
// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:45



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::TransportStatistics &);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::TransportStatistics &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:67



#if !defined _TAO_CDR_OP_OpenDDS_DCPS_TransportStatisticsSequence_H_
#define _TAO_CDR_OP_OpenDDS_DCPS_TransportStatisticsSequence_H_

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


OpenDDS_Dcps_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::TransportStatisticsSequence &_tao_sequence);
OpenDDS_Dcps_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::TransportStatisticsSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_OpenDDS_DCPS_TransportStatisticsSequence_H_ */
// TAO_IDL - Generated from
// be/be_codegen.cpp:1666



OPENDDS_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "OpenddsDcpsExtC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

