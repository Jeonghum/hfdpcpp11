//===--- marinara_sauce.cpp - -----------------------------------*- C++ -*-===//
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
#include "marinara_sauce.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string MarinaraSauce::ToString() const
  {
    std::cout << "MarinaraSauce::ToString" << std::endl;
    return "Marinara Sauce";
  }
} //namespace headfirst
