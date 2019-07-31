#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Queue Reconstruction by Height", "[reconstructQueue]") {
    Solution s;
    vector<vector<int>> input = {{7, 0},
                                 {4, 4},
                                 {7, 1},
                                 {5, 0},
                                 {6, 1},
                                 {5, 2}};
    vector<vector<int>> output = {{5, 0},
                                  {7, 0},
                                  {5, 2},
                                  {6, 1},
                                  {4, 4},
                                  {7, 1}};
    REQUIRE(s.reconstructQueue(input) == output);
}
