/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Copyright Projet JRL-Japan, 2007
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * File:      exception-factory.h
 * Project:   SOT
 * Author:    Nicolas Mansard
 *
 * Version control
 * ===============
 *
 *  $Id$
 *
 * Description
 * ============
 *
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


#ifndef __SOT_EXCEPTION_FACTORY_H
#define __SOT_EXCEPTION_FACTORY_H

/* --------------------------------------------------------------------- */
/* --- INCLUDE --------------------------------------------------------- */
/* --------------------------------------------------------------------- */


#include <sot-core/exception-abstract.h>
#include <sot-core/sot-core-api.h>
/* --------------------------------------------------------------------- */
/* --- CLASS ----------------------------------------------------------- */
/* --------------------------------------------------------------------- */

namespace sot {

/* \class ExceptionFactory
 */
class SOT_CORE_EXPORT ExceptionFactory 
:public ExceptionAbstract

{
public:

  enum ErrorCodeEnum
    {
      GENERIC = ExceptionAbstract::FACTORY
      ,UNREFERED_OBJECT
      ,UNREFERED_SIGNAL
      ,UNREFERED_FUNCTION
      ,DYNAMIC_LOADING
      ,SIGNAL_CONFLICT
      ,FUNCTION_CONFLICT
      ,OBJECT_CONFLICT
      ,SYNTAX_ERROR    // j' aime bien FATAL_ERROR aussi faut que je la case qq part...
      ,READ_FILE
    };

  static const std::string EXCEPTION_NAME;
  virtual const std::string& getExceptionName( void )const{ return ExceptionFactory::EXCEPTION_NAME; }

  ExceptionFactory ( const ExceptionFactory::ErrorCodeEnum& errcode,
			const std::string & msg = "" );
  ExceptionFactory ( const ExceptionFactory::ErrorCodeEnum& errcode,
			const std::string & msg,const char* format, ... );
  virtual ~ExceptionFactory( void ){}

};


} // namespace sot


#endif /* #ifndef __SOT_EXCEPTION_FACTORY_H */

/*
 * Local variables:
 * c-basic-offset: 2
 * End:
 */