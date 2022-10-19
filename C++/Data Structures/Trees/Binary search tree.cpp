#include <bits/stdc++.h>
using namespace std;
class TreeNode{
   public:
      int val;
      TreeNode *left, *right;
      TreeNode(int data){
         val = data;
         left = right = NULL;
      }
};
void insert(TreeNode **root, int val){
   queue<TreeNode*> q;
   q.push(*root);
   while(q.size()){
      TreeNode *temp = q.front();
      q.pop();
      if(!temp->left){
         if(val != NULL)
            temp->left = new TreeNode(val);
         else
            temp->left = new TreeNode(0);
         return;
      }
      else{
         q.push(temp->left);
      }
      if(!temp->right){
         if(val != NULL)
            temp->right = new TreeNode(val);
         else
            temp->right = new TreeNode(0);
         return;
      }
      else{
         q.push(temp->right);
      }
   }
}
TreeNode *make_tree(vector<int> v){
   TreeNode *root = new TreeNode(v[0]);
   for(int i = 1; i<v.size(); i++){
      insert(&root, v[i]);
   }
   return root;
}
void tree_level_trav(TreeNode*root){
   if (root == NULL) return;
      cout << "[";
   queue<TreeNode *> q;
   TreeNode *curr;
   q.push(root);
   q.push(NULL);
   while (q.size() > 1) {
      curr = q.front();
      q.pop();
      if (curr == NULL){
         q.push(NULL);
      }
      else {
         if(curr->left)
            q.push(curr->left);
         if(curr->right)
            q.push(curr->right);
         if(curr->val == 0 || curr == NULL){
            cout << "null" << ", ";
         }
         else{
            cout << curr->val << ", ";
         }
      }
   }
   cout << "]"<<endl;
}
class Solution {
public:
   TreeNode* insertIntoBST(TreeNode* root, int val) {
      if(!root)return new TreeNode(val);
      if(root->val > val){
         root->left = insertIntoBST(root->left, val);
      }
      else root->right = insertIntoBST(root->right, val);
         return root;
   }
};
main(){
   Solution ob;
   vector<int> v = {4,2,7,1,3};
   TreeNode *root = make_tree(v);
   tree_level_trav(ob.insertIntoBST(root, 5));
}
