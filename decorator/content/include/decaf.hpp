//===--- decaf.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_DECAF_HPP_
#define _HFDP_CPP_DECORATOR_DECAF_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"

namespace headfirst {

  class Decaf : public Beverage {

  public:
    Decaf();
    double Cost() const;
  };


} //namespace headfirst
#endif
