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

TEST_CASE("Remove Linked List Elements", "[removeElements]") {
    Solution s;
    ListNode *input = create_linked_list({1, 2, 6, 3, 4, 5, 6});
    ListNode *ret = s.removeElements(input, 6);
    ListNode *ans = create_linked_list({1, 2, 3, 4, 5});
    for (ListNode *cur_r = ret, *cur_a = ans; cur_a && cur_r;
         cur_r = cur_r->next, cur_a = cur_a->next)
        REQUIRE(cur_r->val == cur_a->val);
}
