//===--- coffee_with_hook.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "caffeine_beverage_with_hook.hpp"


class CoffeeWithHook : public CaffeineBeverageWithHook {
private:
  std::string GetUserInput() const;

public:
  void Brew() const;
  void AddCondiments() const;

  bool CustomerWantsCondiments();
};


#endif
