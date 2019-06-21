#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Arithmetic Sequence", "[longestArithSeqLength]") {
    Solution s;
    vector<int> arr1 = {3, 6, 9, 12};
    REQUIRE(s.longestArithSeqLength(arr1) == 4);
    vector<int> arr2 = {9, 4, 7, 2, 10};
    REQUIRE(s.longestArithSeqLength(arr2) == 3);
    vector<int> arr3 = {12, 28, 13, 6, 34, 36, 53, 24, 29, 2, 23, 0, 22, 25, 53, 34, 23, 50, 35, 43, 53, 11, 48, 56, 44,
                        53, 31, 6, 31, 57, 46, 6, 17, 42, 48, 28, 5, 24, 0, 14, 43, 12, 21, 6, 30, 37, 16, 56, 19, 45,
                        51, 10, 22, 38, 39, 23, 8, 29, 60, 18};
    REQUIRE(s.longestArithSeqLength(arr3) == 4);
}
