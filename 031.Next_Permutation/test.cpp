#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Next Permutation", "[nextPermutation]") {
    Solution s;
    vector<int> test1 = {1, 2, 3}, ans1 = {1, 3, 2};
    s.nextPermutation(test1);
    REQUIRE(test1 == ans1);
    vector<int> test2 = {3, 2, 1}, ans2 = {1, 2, 3};
    s.nextPermutation(test2);
    REQUIRE(test2 == ans2);
    vector<int> test3 = {1, 1, 5}, ans3 = {1, 5, 1};
    s.nextPermutation(test3);
    REQUIRE(test3 == ans3);
    vector<int> test4 = {1, 3, 2}, ans4 = {2, 1, 3};
    s.nextPermutation(test4);
    REQUIRE(test4 == ans4);
    vector<int> test5 = {1, 1}, ans5 = {1, 1};
    s.nextPermutation(test5);
    REQUIRE(test5 == ans5);
    vector<int> test6 = {2, 3, 1}, ans6 = {3, 1, 2};
    s.nextPermutation(test6);
    REQUIRE(test6 == ans6);
}
