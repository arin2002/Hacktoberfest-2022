// Leetcode 1448. Count Good Nodes in Binary Tree
// Medium

/*Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

Input: root = [3,1,4,3,null,1,5]
Output: 4
Explanation: Nodes in blue are good.
Root Node (3) is always a good node.
Node 4 -> (3,4) is the maximum value in the path starting from the root.
Node 5 -> (3,4,5) is the maximum value in the path
Node 3 -> (3,1,3) is the maximum value in the path

Input: root = [3,3,null,4,2]
Output: 3
Explanation: Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.
*/

// Algorithm used here:

// We will simply traverse the given tree in a preOrder fashion and keep a track of the maximum value of a node from the root to that node in a variable max everytime we see that the current root's value is greater than the maximum we increment our answer(the number of good nodes) and update the maximum value of the max. We will use a helper function for this


#include <bits/stdc++.h>
// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    int ans = 0;
    //preOrder travesal of the tree 
    void pre(TreeNode *root, int max)
    {
        if (!root)//base case to end the recursive call
            return;
        if (root->val >= max)//check if this current root is greater than the maximum value of root until now
        {
            ans++;//if so , increment the ans by 1 and update the maximum node value till now
            max = root->val;
        }
        pre(root->left, max);//recursively solve the left subtree
        pre(root->right, max);//recursively solve the right subtree
    }

public:
    int goodNodes(TreeNode *root)
    {
        pre(root, INT_MIN);//helper function to get the number of good nodes in the Binary Tree
        return ans;
    }
    
};