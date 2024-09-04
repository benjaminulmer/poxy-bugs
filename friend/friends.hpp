#pragma once

namespace test {

struct ForwardDec;

struct MyType {
    friend ForwardDec;
    // friend struct ForwardDec;
    // ^^^ this line works
};

}  // namespace test
