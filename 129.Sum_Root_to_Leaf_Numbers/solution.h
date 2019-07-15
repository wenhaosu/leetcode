using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {

private:
    static long helper(TreeNode *root, long sum) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return sum * 10 + root->val;
        return helper(root->left, sum * 10 + root->val) + helper(root->right, sum * 10 + root->val);
    }

public:
    int sumNumbers(TreeNode *root) {
        return helper(root, 0);
    }
};