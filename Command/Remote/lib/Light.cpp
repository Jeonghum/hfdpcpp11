//===--- Light.cpp - --------------------------------------------*- C++ -*-===//
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
#include "Light.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Light::Light( const std::string location) :
  _location( location )
{
  std::cout << "Light::Light" << std::endl;
}
void Light::on() const
{
  std::cout << "Light::on" << std::endl;
  std::cout << _location.c_str() << " light is on" << std::endl;
}
void Light::off() const
{
  std::cout << "Light::off" << std::endl;
  std::cout << _location.c_str() << " light is off" << std::endl;
}

