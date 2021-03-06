//===--- thick_crust_dough.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "dough.hpp"

namespace headfirst {


  class ThickCrustDough : public Dough {

  public:
    std::string ToString() const;
  };


} //namespace headfirst
#endif
