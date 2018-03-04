//===--- Waitress.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "MenuComponent.hpp"


class Waitress {

  const std::shared_ptr<MenuComponent> _allMenus;

  Waitress( const Waitress& ); // Disable copy constructor
  void operator=( const Waitress& ); // Disable assignment operator

public:
  explicit Waitress( const std::shared_ptr<MenuComponent> allMenus );
  void printMenu() const;
};


#endif
