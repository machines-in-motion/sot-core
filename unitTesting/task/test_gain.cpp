/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Rohan Budhiraja
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

/* -------------------------------------------------------------------------- */
/* --- INCLUDES ------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

#include <dynamic-graph/signal.h>
#include <dynamic-graph/linear-algebra.h>
#include <sot/core/gain-adaptive.hh>
#include <iostream>
using namespace std;
using namespace dynamicgraph::sot;
using namespace dynamicgraph;


class DummyClass
{
public:
  dynamicgraph::Vector err;

  dynamicgraph::Vector& getError( dynamicgraph::Vector& res,int t )
  {
    cout << "Dummy::getError ["<< t<< "] "<<endl;
    return res=err;
  }

};

DummyClass dummy;



/* -------------------------------------------------------------------------- */
/* --- INCLUDES ------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

int main( void )
{
  dummy.err.resize(3);
  dummy.err.fill(3);

  GainAdaptive * gain = new GainAdaptive("gain",4,1,5);

  Signal<dynamicgraph::Vector,int> errSig("test");
  errSig.setFunction( boost::bind(&DummyClass::getError,dummy,_1,_2) );

  gain->errorSIN.plug( &errSig );
  cout <<"Appel of errSig and display of the result." << endl;
  cout << errSig(0) <<endl;

  Signal<double,int> &gainSig = gain->gainSOUT;

  cout <<"Compute gain from Gain Signal and display."<< endl;
  cout << gainSig(0) << endl;

  return 0;
}
