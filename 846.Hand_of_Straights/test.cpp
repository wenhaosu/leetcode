#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

TEST_CASE("Hand of Straights", "[isNStraightHand]") {
    Solution s;
    vector<int> hand1 = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    vector<int> hand2 = {1, 2, 3, 4, 5};
    REQUIRE(s.isNStraightHand(hand1, 3));
    REQUIRE(!s.isNStraightHand(hand2, 4));
}
