/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 *
 * See LICENSE file
 *
 */

#ifndef __SOT_FACTORY_HH__
#define __SOT_FACTORY_HH__

/* --------------------------------------------------------------------- */
/* --- INCLUDE --------------------------------------------------------- */
/* --------------------------------------------------------------------- */

#include <dynamic-graph/factory.h>

#define SOT_FACTORY_FEATURE_PLUGIN(sotFeatureType,className) \
  DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN(sotFeatureType,className)
/* -------------------------------------------------------------------------- */
/* --- TASK REGISTERER ------------------------------------------------------ */
/* -------------------------------------------------------------------------- */

#define SOT_FACTORY_TASK_PLUGIN(sotTaskType,className) \
  DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN(sotTaskType,className)

#endif /* #ifndef __SOT_FACTORY_HH__ */




