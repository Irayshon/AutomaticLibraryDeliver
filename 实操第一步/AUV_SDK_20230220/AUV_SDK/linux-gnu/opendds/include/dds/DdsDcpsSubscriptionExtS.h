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
// be/be_codegen.cpp:464

#ifndef _TAO_IDL_DDSDCPSSUBSCRIPTIONEXTS_BF1OX3_H_
#define _TAO_IDL_DDSDCPSSUBSCRIPTIONEXTS_BF1OX3_H_

#include /**/ "ace/pre.h"

#include "DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsSubscriptionS.h"
#include "dds/DdsDcpsGuidS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"

// Skeleton file generation suppressed with command line option -SS

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


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
  class SArg_Traits< ::OpenDDS::DCPS::SubscriptionLostStatus>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::SubscriptionLostStatus,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::BudgetExceededStatus>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::BudgetExceededStatus,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::LatencyStatistics>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::LatencyStatistics,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:674

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::LatencyStatisticsSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::LatencyStatisticsSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




OPENDDS_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

