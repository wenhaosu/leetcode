#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Search in Rotated Sorted Array", "[search]") {
    Solution s;
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums2 = {4, 5, 6, 7, 8, 1, 2};
    REQUIRE(s.search(nums1, 0) == 4);
    REQUIRE(s.search(nums1, 3) == -1);
    REQUIRE(s.search(nums2, 8) == 4);
}
