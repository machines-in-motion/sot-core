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

#include <sot/core/rotation-simple.hh>


bool MATLAB::fullPrec = false;
MATLAB::MATLAB( const RotationSimple& Qh,const unsigned int nJ)
{

  Matrix eye = Eigen::MatrixXd::Identity(nJ,nJ);
  Qh.multiplyRight(eye);
  initFromBubMatrix(eye);
}
