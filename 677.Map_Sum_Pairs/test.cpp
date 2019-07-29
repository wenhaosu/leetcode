#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Map Sum Pairs", "[MapSum]") {
    MapSum s;
    s.insert("apple", 3);
    REQUIRE(s.sum("ap") == 3);
    s.insert("app", 2);
    REQUIRE(s.sum("ap") == 5);
}
