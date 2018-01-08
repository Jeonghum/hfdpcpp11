//===--- FlyRocketPowered.cpp - ---------------------------------*- C++ -*-===//
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
#include "FlyRocketPowered.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Utilities.hpp"

using namespace HFDP::Strategy;

void FlyRocketPowered::fly () const
{
  PrintMessage("FlyRocketPowered::fly");
  std::cout << "I'm flying with a rocket" << std::endl;
}

