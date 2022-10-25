/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
      TreeNode* helper(TreeNode* root)
      {
        if(root->left==NULL)
          return root->right;
        else if(root->right==NULL)
          return root->left;
        TreeNode* rc=root->right;
        TreeNode* lrc=leftrc(root->left);
        lrc->right=rc;
        return root->left;
        
      }
      TreeNode* leftrc(TreeNode* root)
      {
        if(root->right==NULL) return root;
        return leftrc(root->right);
      }
      
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
       if(root==NULL) return NULL;
      if(root->val==key)
        return helper(root);
      TreeNode* node=root;
      while(root!=NULL)
      {
      
        if(key<root->val) {
          if(root->left and root->left->val==key)
          {
            root->left=helper(root->left);
            break;
          }
          else root=root->left;
        }
        else {
          if(root->right and root->right->val==key)
          {
            root->right=helper(root->right);
            break;
          }
          else root=root->right;
        }
      }
      
     return node;
      
      }
  
    
};
