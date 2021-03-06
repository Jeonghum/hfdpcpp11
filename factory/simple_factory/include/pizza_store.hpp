//===--- pizza_store.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PIZZA_STORE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"
#include "simple_pizza_factory.hpp"

namespace headfirst {


  class PizzaStore {

    std::unique_ptr<SimplePizzaFactory> factory_;

  public:
    explicit PizzaStore();

    std::unique_ptr<Pizza> OrderPizza( std::string type );
  };


} //namespace headfirst
#endif
