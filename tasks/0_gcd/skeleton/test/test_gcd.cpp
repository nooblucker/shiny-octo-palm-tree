#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "lib/gcd.hpp"

TEST_CASE("GCD")
{
    REQUIRE(4 == gcd(4, 12), "1");
    REQUIRE(14 == gcd(3780, 3528), "2");
    REQUIRE(13 == gcd(78, 143), "3");
    REQUIRE(12 == gcd(0, 12), "4");
    REQUIRE(4 == gcd(4, 0), "5");
    REQUIRE(7 == gcd(-7, -7), "6");
    REQUIRE(9 == gcd(9, -9), "7");
}
