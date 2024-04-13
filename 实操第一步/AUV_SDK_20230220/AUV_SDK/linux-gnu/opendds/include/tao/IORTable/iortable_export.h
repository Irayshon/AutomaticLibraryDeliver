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

#ifndef TAO_IORTable_EXPORT_H
#define TAO_IORTable_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TAO_IORTable_HAS_DLL)
#  define TAO_IORTable_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TAO_IORTable_HAS_DLL */

#if !defined (TAO_IORTable_HAS_DLL)
#  define TAO_IORTable_HAS_DLL 1
#endif /* ! TAO_IORTable_HAS_DLL */

#if defined (TAO_IORTable_HAS_DLL) && (TAO_IORTable_HAS_DLL == 1)
#  if defined (TAO_IORTable_BUILD_DLL)
#    define TAO_IORTable_Export ACE_Proper_Export_Flag
#    define TAO_IORTable_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_IORTable_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_IORTable_BUILD_DLL */
#    define TAO_IORTable_Export ACE_Proper_Import_Flag
#    define TAO_IORTable_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_IORTable_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_IORTable_BUILD_DLL */
#else /* TAO_IORTable_HAS_DLL == 1 */
#  define TAO_IORTable_Export
#  define TAO_IORTable_SINGLETON_DECLARATION(T)
#  define TAO_IORTable_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_IORTable_HAS_DLL == 1 */

// Set TAO_IORTable_NTRACE = 0 to turn on library-specific
// tracing even if tracing is turned off for ACE.
#if !defined (TAO_IORTable_NTRACE)
#  if (ACE_NTRACE == 1)
#    define TAO_IORTable_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define TAO_IORTable_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !TAO_IORTable_NTRACE */

#if (TAO_IORTable_NTRACE == 1)
#  define TAO_IORTable_TRACE(X)
#else /* (TAO_IORTable_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define TAO_IORTable_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (TAO_IORTable_NTRACE == 1) */

#endif /* TAO_IORTable_EXPORT_H */

