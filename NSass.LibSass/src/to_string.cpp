#include <cmath>
#include <sstream>
#include <iomanip>

#ifndef SASS_TO_STRING
#include "to_string.hpp"
#endif

#include "inspect.hpp"
#include "ast.hpp"
#include <iostream>

namespace Sass {
  using namespace std;

  To_String::To_String() { }
  To_String::~To_String() { }

  inline string To_String::fallback_impl(AST_Node* n)
  {
    Inspect i;
    n->perform(&i);
    return i.get_buffer();
  }

}