#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Group Anagrams", "[groupAnagrams]") {
    Solution s;
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = {{"bat"},
                                     {"eat", "tea", "ate"},
                                     {"tan", "nat"}};
    REQUIRE(s.groupAnagrams(input) == output);
}
