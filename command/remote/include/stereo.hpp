//===--- stereo.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class Stereo {

    std::string location_;

  public:
    explicit Stereo( std::string location );
    void TurnOn() const;
    void TurnOff() const;
    void SetCd() const;
    void SetDvd() const;
    void SetRadio() const;
    void SetVolume(int volume) const;
  };

} //namespace headfirst

#endif
