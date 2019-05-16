#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Most Common Word", "[mostCommonWord]") {
    Solution s;
    string para = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};
    REQUIRE(s.mostCommonWord(para, banned) == "ball");
}
