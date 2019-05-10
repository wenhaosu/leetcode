#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Advantage Shuffle", "[advantageCount]") {
    Solution s;
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {1, 10, 4, 11};
    vector<int> ans1 = {2, 11, 7, 15};
    REQUIRE(s.advantageCount(nums1, nums2) == ans1);
    vector<int> nums3 = {12, 24, 8, 32};
    vector<int> nums4 = {13, 25, 32, 11};
    vector<int> ans2 = {24, 32, 8, 12};
    REQUIRE(s.advantageCount(nums3, nums4) == ans2);
}
