#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Palindrome Partitioning", "[partition]") {
    Solution s;
    vector<vector<string>> wordList = {
            {"aa", "b"},
            {"a",  "a", "b"}};
    REQUIRE(s.partition("aab") == wordList);
}
