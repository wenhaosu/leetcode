#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Keys and Rooms", "[canVisitAllRooms]") {
    Solution s;
    vector<vector<int>> rooms1 = {{1},
                                  {2},
                                  {3},
                                  {}};
    REQUIRE(s.canVisitAllRooms(rooms1));
    vector<vector<int>> rooms2 = {{1, 3},
                                  {3, 0, 1},
                                  {2},
                                  {0}};
    REQUIRE(!s.canVisitAllRooms(rooms2));
}
