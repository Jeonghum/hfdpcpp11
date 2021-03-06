//===--- ceiling_fan_on_command.hpp - ---------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "ceiling_fan.hpp"
#include "command.hpp"

namespace headfirst {


  class CeilingFanOnCommand : public Command {

    const CeilingFan* ceiling_fan_;

  public:
    explicit CeilingFanOnCommand( const CeilingFan* ceiling_fan );
    void Execute() const;
  };


} //namespace headfirst
#endif
