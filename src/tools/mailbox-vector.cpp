/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Francois Keith
 * Pierre Gergondet
 * Rohan Budhiraja
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

/* --- SOT PLUGIN  --- */
#include <dynamic-graph/linear-algebra.h>
#include <sot/core/debug.hh>
#include <sot/core/factory.hh>
#include <sot/core/mailbox.hxx>
#include <sot/core/mailbox-vector.hh>

using namespace dynamicgraph::sot;
using namespace dynamicgraph;

// Explicit template specialization
#ifdef WIN32
MailboxVector::MailboxVector( const std::string& name): Mailbox<dynamicgraph::Vector> (name){}
#else
MAILBOX_TEMPLATE_SPE(dynamicgraph::Vector)
#endif

template<>DYNAMICGRAPH_FACTORY_ENTITY_PLUGIN(MailboxVector,"Mailbox<Vector>");

