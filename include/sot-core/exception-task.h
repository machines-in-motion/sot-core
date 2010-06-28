/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Copyright Projet JRL-Japan, 2007
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * File:      exception-task.h
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


#ifndef __SOT_EXCEPTION_TASK_H
#define __SOT_EXCEPTION_TASK_H

/* --------------------------------------------------------------------- */
/* --- INCLUDE --------------------------------------------------------- */
/* --------------------------------------------------------------------- */


#include <sot-core/exception-abstract.h>
#include <sot-core/sot-core-api.h>
/* --------------------------------------------------------------------- */
/* --- CLASS ----------------------------------------------------------- */
/* --------------------------------------------------------------------- */

namespace sot {

/* \class ExceptionTask
 */
class SOT_CORE_EXPORT ExceptionTask 
:public ExceptionAbstract

{
public:

  enum ErrorCodeEnum
    {
      GENERIC = ExceptionAbstract::TASK
      ,EMPTY_LIST
      ,NON_ADEQUATE_FEATURES
      ,MATRIX_SIZE
      ,BOUND_TYPE
      ,PARSER_MULTI_BOUND
    };

  static const std::string EXCEPTION_NAME;
  virtual const std::string& getExceptionName( void ) const { return EXCEPTION_NAME; }

  ExceptionTask ( const ExceptionTask::ErrorCodeEnum& errcode,
		     const std::string & msg = "" );
  ExceptionTask( const ExceptionTask::ErrorCodeEnum& errcode,
		    const std::string & msg,const char* format, ... );
  virtual ~ExceptionTask( void ){}

};

} // namespace sot



#endif /* #ifndef __SOT_EXCEPTION_TASK_H */

/*
 * Local variables:
 * c-basic-offset: 2
 * End:
 */