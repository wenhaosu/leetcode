#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Sum of Even Numbers After Queries", "[sumEvenAfterQueries]") {
    Solution s;
    vector<int> A = {1, 2, 3, 4};
    vector<vector<int>> queries = {{1,  0},
                                   {-3, 1},
                                   {-4, 0},
                                   {2,  3}};
    vector<int> ans = {8, 6, 2, 4};
    REQUIRE(s.sumEvenAfterQueries(A, queries) == ans);
}
