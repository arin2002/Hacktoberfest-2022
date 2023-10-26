/*
Vertical Order Traversal of a Binary Tree - Leetcode Hard Question

Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

Return the vertical order traversal of the binary tree.

Example : Input: root = [3,9,20,null,null,15,7]
Output: [[9],[3,15],[20],[7]]
Explanation:
Column -1: Only node 9 is in this column.
Column 0: Nodes 3 and 15 are in this column in that order from top to bottom.
Column 1: Only node 20 is in this column.
Column 2: Only node 7 is in this column.
*/

//Code in C++
 
  //Definition for a binary tree node.
  struct TreeNode {
      int val;
       TreeNode *left;
       TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int,multiset<int>>> ds;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            int hd = temp.second.first;
            int level = temp.second.second;
            TreeNode* frontNode = temp.first;
            
            ds[hd][level].insert(frontNode->val);
            if(frontNode->left){
                 q.push(make_pair(frontNode->left,make_pair(hd-1,level+1)));
            }
               if(temp.first->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1,level+1)));
            }
        }
        
        vector<vector<int>> ans;
       for (auto p : ds) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
