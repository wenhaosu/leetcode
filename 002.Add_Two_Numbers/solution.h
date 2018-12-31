struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode result(0);
        ListNode *pre = &result;
        int extra = 0;
        while (l1 || l2 || extra) {
            int sum = extra;
            if (l1) sum += l1->val;
            if (l2) sum += l2->val;
            extra = sum / 10;
            pre->next = new ListNode(sum % 10);
            pre = pre->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return result.next;
    }
};