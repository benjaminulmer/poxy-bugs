#pragma once

#define MY_MACRO(MyType, member) \
\
    explicit MyType(int in) \
        : member{in} {}
