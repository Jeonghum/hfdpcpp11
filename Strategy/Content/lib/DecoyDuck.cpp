//===--- DecoyDuck.cpp - ----------------------------------------*- C++ -*-===//
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
#include "DecoyDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"
#include "Utilities.hpp"

using namespace HFDP::Strategy;

DecoyDuck::DecoyDuck()
: Duck( new FlyNoWay(), new MuteQuack() )
{
  PrintMessage("DecoyDuck::DecoyDuck");
}
void DecoyDuck::display() const
{
  PrintMessage("DecoyDuck::display");
  std::cout << "I'm a duck Decoy" << std::endl;
}
