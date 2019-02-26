/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 *
 * See LICENSE file
 *
 */

#ifndef SOT_CORE_API_HH
#define SOT_CORE_API_HH

#if defined (WIN32)
#  ifdef sot_core_EXPORTS
#    define SOT_CORE_EXPORT __declspec(dllexport)
#  else
#    define SOT_CORE_EXPORT __declspec(dllimport)
#  endif
#else
#  define SOT_CORE_EXPORT
#endif

#endif
