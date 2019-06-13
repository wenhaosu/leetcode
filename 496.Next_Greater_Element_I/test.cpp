#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Next Greater Element I", "[nextGreaterElement]") {
    Solution s;
    vector<int> nums1_1 = {4, 1, 2};
    vector<int> nums1_2 = {1, 3, 4, 2};
    vector<int> result1 = {-1, 3, -1};
    REQUIRE(s.nextGreaterElement(nums1_1, nums1_2) == result1);
}
