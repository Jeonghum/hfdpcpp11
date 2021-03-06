//===--- has_quarter_state.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"
#include "state.hpp"

namespace headfirst {


  class HasQuarterState : public State {

    GumballMachine* gumball_machine_;
    int random_;

    // Disable copy constructor and assignment operator
    HasQuarterState( const HasQuarterState& ) = delete;
    void operator=( const HasQuarterState& ) = delete;

  public:
    explicit HasQuarterState( GumballMachine* gumball_machine );
    void InsertQuarter() const;
    void EjectQuarter() const;
    void TurnCrank() const;
    void Dispense();
    std::string ToString() const;
  };


} //namespace headfirst
#endif
