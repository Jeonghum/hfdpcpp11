//===--- espresso.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_ESPRESSO_HPP_
#define _HFDP_CPP_DECORATOR_ESPRESSO_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"

namespace headfirst {


  class Espresso : public Beverage {

  public:
    Espresso();
    double Cost() const;
  };


} //namespace headfirst
#endif
