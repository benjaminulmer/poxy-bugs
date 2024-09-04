#pragma once

#include "macros/macro.hpp"

struct Foo {
    MY_MACRO(Foo, foo);

  private:
    int foo;
};
