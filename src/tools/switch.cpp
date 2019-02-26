/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Joseph Mirabel
 * Rohan Budhiraja
 *
 * See LICENSE file
 *
 */
#include <sot/core/switch.hh>

#include <dynamic-graph/factory.h>

#include "type-name-helper.hh"

namespace dynamicgraph {
  namespace sot {
    template< typename Tin, typename Tout, typename Time >
    std::string VariadicAbstract<Tin,Tout,Time>::getTypeInName (void) { return TypeNameHelper<Tin>::typeName; }
    template< typename Tin, typename Tout, typename Time >
    std::string VariadicAbstract<Tin,Tout,Time>::getTypeOutName(void) { return TypeNameHelper<Tout>::typeName; }

    typedef Switch<Vector,int> SwitchVector;
    template<>
    DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN (SwitchVector, "SwitchVector");

    typedef Switch<bool,int> SwitchBool;
    template<>
    DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN (SwitchBool, "SwitchBoolean");
  } // namespace sot
} // namespace dynamicgraph
