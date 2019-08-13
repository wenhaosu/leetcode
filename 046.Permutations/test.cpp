#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Permutations", "[permute]") {
    Solution s;
    vector<int> input = {1, 2, 3};
    vector<vector<int>> output = {{1, 2, 3},
                                  {1, 3, 2},
                                  {2, 1, 3},
                                  {2, 3, 1},
                                  {3, 1, 2},
                                  {3, 2, 1}};
    REQUIRE(s.permute(input) == output);
}
