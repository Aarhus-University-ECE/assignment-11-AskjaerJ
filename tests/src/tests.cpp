#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(1,0) == 1); // sumtail(1) must be 1.
    REQUIRE(sumtail(4,0) == 10); // sumtail(4) must be 10. 1+2+3+4 = 10.
    REQUIRE(sumtail(20,0) == 210); // sumtail(20) must be 210. 1+2+3+...+20 = 210.
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1) == 1); // sumwhile(1) must be 1.
    REQUIRE(sumwhile(4) == 10); // sumwhile(4) must be 10. 1+2+3+4.
    REQUIRE(sumwhile(20) == 210); // sumwhile(20) must be 210. 1+2+3+...+20 = 210.
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(0,0,1) == 0); // fib(0) must be 0.
    REQUIRE(fib(4,0,1) == 3); // fib(4) must be 3, 0, 1, 1, 2, 3. With start in zero index.
    REQUIRE(fib(10,0,1) == 55); // fib(10) must be 55. 0, 1, 1,...21,34 = 55.
}


