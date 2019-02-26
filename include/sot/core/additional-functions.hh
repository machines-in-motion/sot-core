/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 *
 * See LICENSE file
 *
 */

/* SOT */
#include <dynamic-graph/signal-base.h>
#include <sot/core/exception-factory.hh>
#include <dynamic-graph/pool.h>
#include <sot/core/pool.hh>
#include "sot/core/api.hh"

/* --- STD --- */
#include <string>
#include <map>
#include <sstream>

/* --- BOOST --- */
#include <boost/function.hpp>
#include <boost/bind.hpp>

namespace dynamicgraph { namespace sot {

/*! @ingroup factory
  \brief This helper class dynamically overloads the "new" shell command
  to allow creation of tasks and features as well as entities.
 */
class AdditionalFunctions
{
public:
	AdditionalFunctions();
	~AdditionalFunctions();
	static void cmdFlagSet( const std::string& cmd,std::istringstream& args,
						   std::ostream& os );
};

} /* namespace sot */} /* namespace dynamicgraph */
