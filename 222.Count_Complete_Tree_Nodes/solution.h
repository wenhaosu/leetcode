using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int countNodes(TreeNode *root) {
        if (root == nullptr)
            return 0;
        auto left = root, right = root;
        int height = 0;
        while (right != nullptr) {
            left = left->left;
            right = right->right;
            height++;
        }
        if (left == nullptr)
            return (1 << height) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};