#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Evaluate Division", "[calcEquation]") {
    Solution s;
    vector<vector<string>> equations = {{"a", "b"},
                                        {"b", "c"}};
    vector<double> values = {2.0, 3.0};
    vector<vector<string>> queries = {{"a", "c"},
                                      {"b", "a"},
                                      {"a", "e"},
                                      {"a", "a"},
                                      {"x", "x"}};
    vector<double> ans = {6.0, 0.5, -1.0, 1.0, -1.0};
    REQUIRE(s.calcEquation(equations, values, queries) == ans);
}
