/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Guilhem Saurel
 * Nicolas Mansard
 * Pierre Gergondet
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

/* --------------------------------------------------------------------- */
/* --- INCLUDE --------------------------------------------------------- */
/* --------------------------------------------------------------------- */

/* --- SOT --- */
#include <sot/core/debug.hh>
#include <sot/core/feature-task.hh>
#include <sot/core/exception-feature.hh>
#include <sot/core/task.hh>
#include <dynamic-graph/pool.h>
using namespace std;
using namespace dynamicgraph::sot;
using namespace dynamicgraph;


#include <sot/core/factory.hh>
DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN(FeatureTask,"FeatureTask");

/* --------------------------------------------------------------------- */
/* --- CLASS ----------------------------------------------------------- */
/* --------------------------------------------------------------------- */



FeatureTask::
FeatureTask( const string& pointName )
  : FeatureGeneric( pointName )
{
}

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

void FeatureTask::
display( std::ostream& os ) const
{
  os << "Feature from task <" << getName();
  if( taskPtr ) os <<  ": from task " << taskPtr->getName();
  os << std::endl;
}
