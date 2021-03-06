//===--- turkey_adapter.cpp - -----------------------------------*- C++ -*-===//
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
#include "turkey_adapter.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {

  TurkeyAdapter::TurkeyAdapter(const Turkey* turkey) :
    my_turkey_( turkey )
  {
    assert(my_turkey_);
    std::cout << "TurkeyAdapter::TurkeyAdapter" << std::endl;
  }

  void TurkeyAdapter::Fly() const
  {
    assert(my_turkey_);
    std::cout << "TurkeyAdapter::fly" << std::endl;
    for( auto i = 0; i < 5; i++ ) {
      my_turkey_->Fly();
    }
  }

  void TurkeyAdapter::Quack() const
  {
    assert(my_turkey_);
    std::cout << "TurkeyAdapter::quack" << std::endl;
    my_turkey_->Gobble();
  }

} //namespace headfirst
