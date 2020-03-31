// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "gdb/GdbWrapper.hpp"
#include "catch.hpp"

TEST_CASE( "Factorial of 0 is 1 (fail)", "[single-file]" ) {
  REQUIRE( 1 == 0 );
}