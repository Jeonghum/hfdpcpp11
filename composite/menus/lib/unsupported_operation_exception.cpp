//===--- unsupported_operation_exception.cpp - ------------------*- C++ -*-===//
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
#include "unsupported_operation_exception.hpp"
//C system files.
//C++ system files.
#include <exception>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


UnsupportedOperationException::UnsupportedOperationException() throw():
  std::exception()
{
  std::cout << "UnsupportedOperationException::"
                     "UnsupportedOperationException" << std::endl;
}
UnsupportedOperationException::UnsupportedOperationException( const std::string message ) :
  std::exception( /*message.c_str()*/ ), message_( message )
{
  std::cout << "UnsupportedOperationException::"
                     "UnsupportedOperationException" << std::endl;
}

UnsupportedOperationException::~UnsupportedOperationException() throw()
{
  std::cout << "UnsupportedOperationException::"
                     "~UnsupportedOperationException" << std::endl;
}

std::string UnsupportedOperationException::GetMessage() const
{
  std::cout << "UnsupportedOperationException::getMessage" << std::endl;
  return message_;
}


