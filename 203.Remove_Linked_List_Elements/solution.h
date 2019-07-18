using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        ListNode **list = &head;
        while (*list != nullptr) {
            if ((*list)->val == val) *list = (*list)->next;
            else list = &(*list)->next;
        }
        return head;
    }
};