//===--- whip.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_WHIP_HPP_
#define _HFDP_CPP_DECORATOR_WHIP_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"
#include "condiment_decorator.hpp"

namespace headfirst {


  class Whip : public CondimentDecorator {

    const std::unique_ptr<Beverage> beverage_;

  public:
    explicit Whip(std::unique_ptr<Beverage> beverage);
    ~Whip();
    std::string GetDescription() const;
    double Cost() const;
  };


} //namespace headfirst
#endif
