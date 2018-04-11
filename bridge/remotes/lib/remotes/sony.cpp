//===--- Sony.cpp - ---------------------------------------------*- C++ -*-===//
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


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "sony.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "remotes_config.h"
#ifdef USE_UTILS
#include <utilities.hpp>
#else
#include <iostream>
#endif

namespace headfirst {

  Sony::Sony( const std::string& location ) :
    location_( location )
  {}

  void Sony::On()
  {
#ifdef USE_UTILS
    PrintMessage("Sony ", false);
    PrintMessage(location_.c_str(), false);
    PrintMessage(" TV is on");
#else
    std::cout << "Sony " << location_.c_str() << " TV is on" << std::endl;
#endif
  }

  void Sony::Off()
  {
#ifdef USE_UTILS
    PrintMessage("Sony ", false);
    PrintMessage(location_.c_str(), false);
    PrintMessage(" TV is off");
#else
    std::cout << "Sony " << location_.c_str() << " TV is off" << std::endl;
#endif
  }

  void Sony::TuneChannel( unsigned int channel )
  {
#ifdef USE_UTILS
    PrintMessage("Sony ", false);
    PrintMessage(location_.c_str(), false);
    PrintMessage(" tuned to channel ", false);
    PrintNumber(channel);
#else
    std::cout << "Sony " << location_.c_str() << " tuned to channel " << channel << std::endl;
#endif
  }

} //namespace headfirst
