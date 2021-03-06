//===--- tea.cpp - ----------------------------------------------*- C++ -*-===//
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
#include "tea.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  void Tea::Brew() const
  {
    std::cout << "Tea::brew" << std::endl;
    std::cout << "Steeping the tea" << std::endl;
  }
  void Tea::AddCondiments() const
  {
    std::cout << "Tea::AddCondiments" << std::endl;
    std::cout << "Adding Lemon" << std::endl;
  }
} //namespace headfirst
