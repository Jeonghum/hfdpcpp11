//===--- pizza_ingredient_factory.cpp - -------------------------*- C++ -*-===//
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
#include "pizza_ingredient_factory.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  PizzaIngredientFactory::~PizzaIngredientFactory()
  {
    std::cout << "PizzaIngredientFactory"
      "::~PizzaIngredientFactory" << std::endl;
  }
} //namespace headfirst
