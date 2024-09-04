#pragma once

#include "macros/macro.hpp"

struct Bar {
    MY_MACRO(Bar, bar);

  private:
    int bar;
};
