using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode *bstFromPreorder(vector<int> &preorder) {
        return helper(preorder.begin(), preorder.end());
    }

    TreeNode *helper(vector<int>::iterator start, vector<int>::iterator end) {
        if (start >= end) return nullptr;

        TreeNode *node = new TreeNode(*start);
        auto left_node = start + 1;
        auto right_node = upper_bound(start, end, *start);

        node->left = helper(left_node, right_node);
        node->right = helper(right_node, end);

        return node;
    }
};