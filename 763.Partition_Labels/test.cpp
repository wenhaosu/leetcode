#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Partition Labels", "[partitionLabels]") {
    Solution s;
    vector<int> ans = {9, 7, 8};
    REQUIRE(s.partitionLabels("ababcbacadefegdehijhklij") == ans);
}
