#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Word Ladder", "[test]") {
    Solution s;
    vector<string> wordList1 = {"hot", "dot", "dog", "lot", "log", "cog"};
    REQUIRE(s.ladderLength("hit", "cog", wordList1) == 5);
    vector<string> wordList2 = {"hot", "dot", "dog", "lot", "log"};
    REQUIRE(s.ladderLength("hit", "cog", wordList2) == 0);
}
