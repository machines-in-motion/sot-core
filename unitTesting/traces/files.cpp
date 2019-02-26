/*
 * Copyright 2010, CNRS/AIST
 * Copyright 2011-2019 LAAS, CNRS
 *
 * Florent Lamiraux
 * Francois Bleibel
 * Thomas Moulard
 *
 * See LICENSE file
 *
 */

#include <iostream>
#include <sot/core/debug.hh>

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>

using namespace std;

int main()
{

    boost::filesystem::create_directory( "foobar" );
    ofstream file( "foobar/cheeze" );
    file << "tastes good!\n";
    file.close();
    if ( !boost::filesystem::exists( "foobar/cheeze" ) )
      std::cout << "Something is rotten in foobar\n";



  return 0;
}

