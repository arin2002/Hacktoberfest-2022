/*
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

The path sum of a path is the sum of the node's values in the path.

Given the root of a binary tree, return the maximum path sum of any non-empty path.

Example :
Input: root = [1,2,3]
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.
*/

//Code in C++

  //Definition for a binary tree node.
  #include <bits/stdc++.h>
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
    private:
    int maxiPathSum(TreeNode* root, int& maxiSum){
        if(root==NULL) return 0;
        int left = max(0,maxiPathSum(root->left,maxiSum));
        int right = max(0,maxiPathSum(root->right,maxiSum));
        maxiSum = max(maxiSum,root->val+left+right);
        return root->val+max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int arjun = maxiPathSum(root,ans);
        return ans;
        
    }
};


