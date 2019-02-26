/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 *
 * See LICENSE file
 *
 */

#include <iostream>
#include <sot/core/debug.hh>


#ifndef WIN32
#include <unistd.h>
#endif

using namespace std;

#include <dynamic-graph/factory.h>
#include <dynamic-graph/entity.h>
#include <sot/core/robot-simu.hh>
#include <sstream>

using namespace dynamicgraph;
using namespace dynamicgraph::sot;
namespace dgsot = dynamicgraph::sot;

int main( int ,char** )
{
  a_robot_simu = new dgsot::RobotSimu("test_robot_simu");
  
  return 0;
}
