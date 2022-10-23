// Given the root of a binary tree, return the preorder traversal of its nodes' values.
// Example:
// Input: root = [1,null,2,3]
// Output: [1,2,3]

class Solution {
public:
    vector<int> a;
    void preorder(TreeNode* root)
    {
        if(root)
        {
            a.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return a;
    }
};
