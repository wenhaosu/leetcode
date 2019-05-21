using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *second = head->next;
        ListNode *nextHead = second->next;
        ListNode *sortedNext = swapPairs(nextHead);
        head->next = sortedNext;
        second->next = head;
        return second;
    }
};