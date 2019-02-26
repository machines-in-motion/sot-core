/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Francois Keith
 * Joseph Mirabel
 * Pierre Gergondet
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

#include <sot/core/integrator-euler.hh>

#include "integrator-euler.t.cpp"

#include <sot/core/integrator-euler-impl.hh>

#ifdef WIN32
  IntegratorEulerVectorMatrix::IntegratorEulerVectorMatrix( const std::string& name ) : 
	IntegratorEuler<Vector,Matrix>(name) {}
  std::string IntegratorEulerVectorMatrix::getTypeName( void ) { return "IntegratorEulerVectorMatrix"; }

  IntegratorEulerVectorDouble::IntegratorEulerVectorDouble( const std::string& name ) : 
	IntegratorEuler<Vector,double>(name) {}
  std::string IntegratorEulerVectorDouble::getTypeName( void ) { return "IntegratorEulerVectorDouble"; }
#endif // WIN32

