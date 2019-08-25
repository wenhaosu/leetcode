#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Meeting Rooms II", "[minMeetingRooms]") {
    Solution s;
    vector<vector<int>> input1 = {{0,  30},
                                  {5,  10},
                                  {15, 20}};
    vector<vector<int>> input2 = {{7, 10},
                                  {2, 4}};
    REQUIRE(s.minMeetingRooms(input1) == 2);
    REQUIRE(s.minMeetingRooms(input2) == 1);
}
