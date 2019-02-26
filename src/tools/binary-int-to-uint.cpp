/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Francois Keith
 * Guilhem Saurel
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

/* --- SOT --- */
#include <sot/core/pool.hh>
#include <sot/core/binary-int-to-uint.hh>
#include <sot/core/exception-feature.hh>
#include <sot/core/debug.hh>
using namespace std;

#include <dynamic-graph/factory.h>

using namespace dynamicgraph::sot;
using namespace dynamicgraph;

DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN(BinaryIntToUint,"BinaryIntToUint");

/* --------------------------------------------------------------------- */
/* --- CLASS ----------------------------------------------------------- */
/* --------------------------------------------------------------------- */

BinaryIntToUint::BinaryIntToUint( const string& fname )
  : Entity( fname)
  ,binaryIntSIN( NULL,"BinaryIntToUint("+name+")::input(int)::sin" )
  ,binaryUintSOUT( boost::bind(&BinaryIntToUint::computeOutput,this,_1,_2),
		   binaryIntSIN,
		   "BinaryIntToUint("+name+")::output(unsigned int)::sout" )
{
  signalRegistration( binaryIntSIN<<binaryUintSOUT );
}

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

unsigned& BinaryIntToUint::computeOutput( unsigned& res,int time )
{
  sotDEBUGIN(15);

  int in = binaryIntSIN.access(time);
  if(in < 0){ res = 0; }
  else{ res = 1; }

  sotDEBUGOUT(15);
  return res;
}

void BinaryIntToUint::display( std::ostream& os ) const
{
  os << "BinaryIntToUint <" << name << "> TODO..." << endl;
}
