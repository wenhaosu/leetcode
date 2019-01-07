#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

        /// Brute Force Solution

//        ListNode header(0);
//        ListNode* cur_node = &header;
//        while (l1 && l2) {
//            ListNode** next_node = (l1->val < l2->val ? &l1 : &l2);
//            cur_node->next = *next_node;
//            *next_node = (*next_node)->next;
//            cur_node = cur_node->next;
//        }
//        cur_node->next = l1 ? l1 : l2;
//        return header.next;

        /// Recursive Solution

        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};