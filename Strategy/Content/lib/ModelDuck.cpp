//===--- ModelDuck.cpp - ----------------------------------------*- C++ -*-===//
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
#include "ModelDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Utilities.hpp"
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "FakeQuack.hpp"

using namespace HFDP::Strategy;

ModelDuck::ModelDuck() : Duck( new FlyNoWay(), new FakeQuack() )
{
  PrintMessage("ModelDuck::ModelDuck");
}
void ModelDuck::display() const
{
  PrintMessage("ModelDuck::display");
  std::cout << "I'm a model duck" << std::endl;
}

