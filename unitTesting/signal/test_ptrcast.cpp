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
#include <dynamic-graph/all-signals.h>
#include <sot/core/matrix-geometry.hh>
#include <dynamic-graph/linear-algebra.h>
#include <iostream>
using namespace std;
using namespace dynamicgraph;
using namespace dynamicgraph::sot;


Signal<dynamicgraph::Matrix,int> base("base");
Signal<dynamicgraph::Matrix,int> sig("matrix");
SignalPtr<dynamicgraph::Matrix,int> sigptr(&base);

Signal<MatrixRotation,int> sigMR("matrixRot");

int main( void )
{
  sigptr.plug(&sig);
  cout << "Correctly plugged matrix" << endl;
  //  sigptr.plug(&sigMR);
  //  cout << "Correctly plugged matrix rotation" << endl;

  return 0;
}
