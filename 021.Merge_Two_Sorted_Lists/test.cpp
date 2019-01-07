#define CATCH_CONFIG_MAIN

#include "../Catch/catch.hpp"
#include "solution.h"

ListNode *create_linked_list(std::initializer_list<int> lst) {
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : nullptr;
    for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
        cur->next = new ListNode(*iter++);
    return head;
}

TEST_CASE("Merge Two Sorted Lists", "[mergeTwoLists]") {
    Solution s;
    ListNode *l1 = create_linked_list({1, 2, 4});
    ListNode *l2 = create_linked_list({1, 3, 4});
    ListNode *ret = s.mergeTwoLists(l1, l2);
    ListNode *ans = create_linked_list({1, 1, 2, 3, 4, 4});
    for (ListNode *cur_r = ret, *cur_a = ans; cur_a && cur_r;
         cur_r = cur_r->next, cur_a = cur_a->next)
        REQUIRE(cur_r->val == cur_a->val);
}
