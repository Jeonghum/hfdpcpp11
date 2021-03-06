//===--- no_command.hpp - ---------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"

namespace headfirst {

  class NoCommand : public Command{

  public:
    void Execute() const;
  };


} //namespace headfirst
#endif
