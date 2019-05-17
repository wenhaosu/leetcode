#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Add Binary", "[addBinary]") {
    auto *cache = new LRUCache(2);
    cache->put(1, 1);
    cache->put(2, 2);
    REQUIRE(cache->get(1) == 1);
    cache->put(3, 3);
    REQUIRE(cache->get(2) == -1);
    cache->put(4, 4);
    REQUIRE(cache->get(1) == -1);
    REQUIRE(cache->get(3) == 3);
    REQUIRE(cache->get(4) == 4);
    delete cache;
}
