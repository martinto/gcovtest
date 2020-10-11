#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "main.cpp"

TEST_CASE("My Test", "[GreatestOfThree]")
{
    REQUIRE( GreatestOfThree(1, 2, 3) == 3);
}