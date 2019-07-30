#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Top K Frequent Elements", "[topKFrequent]") {
    Solution s;
    vector<int> nums1 = {1, 1, 1, 2, 2, 3}, ans1 = {1, 2};
    vector<int> nums2 = {1}, ans2 = {1};
    REQUIRE(s.topKFrequent(nums1, 2) == ans1);
    REQUIRE(s.topKFrequent(nums2, 1) == ans2);
}
