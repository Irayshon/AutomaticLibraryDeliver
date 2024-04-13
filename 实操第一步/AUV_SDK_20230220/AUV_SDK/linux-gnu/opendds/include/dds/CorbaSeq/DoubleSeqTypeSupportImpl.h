/* -*- C++ -*- */
/* Generated by /mnt/d/Work/OpenDDS-SDK-Build/OpenDDS-master/bin/opendds_idl version 3.23.0-dev (ACE version 6.2a_p25) running on input file CorbaSeq/DoubleSeq.idl */
#ifndef OPENDDS_IDL_GENERATED_DOUBLESEQTYPESUPPORTIMPL_H_6HKP65
#define OPENDDS_IDL_GENERATED_DOUBLESEQTYPESUPPORTIMPL_H_6HKP65

#include <dds/Version.h>
#if !OPENDDS_VERSION_EXACTLY(3, 23, 0)
#  error "This file should be regenerated with opendds_idl"
#endif
#include <dds/DCPS/Definitions.h>

#include <dds/DdsDcpsC.h>

#include "tao/DoubleSeqC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/XTypes/TypeObject.h"
#include "dds/DCPS/dcps_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: DoubleSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct CORBA_DoubleSeq_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<CORBA_DoubleSeq_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<CORBA_DoubleSeq_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::CORBA::DoubleSeq& seq);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::CORBA::DoubleSeq& seq);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::CORBA::DoubleSeq& seq);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::CORBA::DoubleSeq*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: DoubleSeq */

/* End MODULE: CORBA */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif /* OPENDDS_IDL_GENERATED_DOUBLESEQTYPESUPPORTIMPL_H_6HKP65 */
