//===--- main.cpp - ---------------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <memory>
#include <iostream>
//Other libraries' .h files.
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "duck.hpp"
#include "duck_adapter.hpp"
#include "mallard_duck.hpp"
#include "turkey.hpp"
#include "turkey_adapter.hpp"
#include "wild_turkey.hpp"


void TestDuck( const headfirst::Duck* duck )
{
  std::cout << "TestDuck" << std::endl;
  duck->Quack();
  duck->Fly();
}

int main( int argc, char* argv[] )
{

  //https://google.github.io/styleguide/cppguide.html
  //#Ownership_and_Smart_Pointers
  std::unique_ptr<headfirst::MallardDuck>
    duck( new headfirst::MallardDuck() );
  std::unique_ptr<headfirst::Turkey>
    duck_adapter( new headfirst::DuckAdapter(duck.get()) );

  for( auto i = 0; i < 10; i++ ) {
    std::cout << "The DuckAdapter says..." << std::endl;
    duck_adapter->Gobble();
    duck_adapter->Fly();
  }

  std::unique_ptr<headfirst::WildTurkey>
    turkey( new headfirst::WildTurkey() );
  std::unique_ptr<headfirst::Duck>
    turkey_adapter( new headfirst::TurkeyAdapter(turkey.get()) );

  std::cout << "The Turkey says..." << std::endl;
  turkey->Gobble();
  turkey->Fly();

  std::cout << "The Duck says..." << std::endl;
  TestDuck(duck.get());

  std::cout << "The TurkeyAdapter says..." << std::endl;
  TestDuck(turkey_adapter.get());

  return 0;
}

