# Copyright 2010,  LAAS, JRL, CNRS/AIST
# Copyright 2011-2019, LAAS, CNRS
#
# Authors: François Bleibel, Olivier Stasse
# See LICENSE file

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

INCLUDE(cmake/base.cmake)
INCLUDE(cmake/boost.cmake)
INCLUDE(cmake/eigen.cmake)
INCLUDE(cmake/lapack.cmake)
INCLUDE(cmake/cpack.cmake)
INCLUDE(cmake/python.cmake)

SET(PROJECT_NAME sot-core)
SET(PROJECT_DESCRIPTION "Hierarchical task solver plug-in for dynamic-graph.")
SET(PROJECT_URL "http://github.com/jrl-umi3218/sot-core")

SET(CUSTOM_HEADER_DIR "sot/core")

SET(DOXYGEN_USE_MATHJAX YES)

# Disable -Werror on Unix for now.
SET(CXX_DISABLE_WERROR True)

SET(PKG_CONFIG_ADDITIONAL_VARIABLES
  ${PKG_CONFIG_ADDITIONAL_VARIABLES}
  plugindirname
  plugindir
  )

SETUP_PROJECT()

PKG_CONFIG_APPEND_LIBS("sot-core")

# Search for dependencies.
# Boost
SET(BOOST_COMPONENTS thread filesystem program_options unit_test_framework system regex )
SEARCH_FOR_EIGEN()

ADD_REQUIRED_DEPENDENCY("dynamic-graph >= 3.0.0")

OPTION (BUILD_PYTHON_INTERFACE "Build the python binding" ON)
IF(BUILD_PYTHON_INTERFACE)
  FINDPYTHON(2.7 EXACT REQUIRED)
  STRING(REGEX REPLACE "-" "_" PY_NAME ${PROJECT_NAME})
  SET(${PY_NAME}_INSTALL_DIR ${PYTHON_SITELIB}/${PY_NAME})
  INCLUDE_DIRECTORIES(${PYTHON_INCLUDE_DIRS})
  ADD_REQUIRED_DEPENDENCY("dynamic-graph-python >= 3.0.0")
ENDIF(BUILD_PYTHON_INTERFACE)
ADD_COMPILE_DEPENDENCY ("pinocchio")

SEARCH_FOR_BOOST()

ADD_SUBDIRECTORY(include)
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(unitTesting)
ADD_SUBDIRECTORY(doc)

SETUP_PROJECT_FINALIZE()
SETUP_PROJECT_CPACK()
