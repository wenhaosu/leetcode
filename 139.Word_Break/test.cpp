#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Word Break", "[wordBreak]") {
    Solution s;
    vector<string> wordDict = {"apple", "pen"};
    REQUIRE(s.wordBreak("applepenapple", wordDict));
}
