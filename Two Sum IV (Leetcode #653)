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
    vector<int> v;
    
int isPairSum(vector<int>A, int X)
{
    int N=A.size();
    int i = 0;
    int j = N - 1;
 
    while (i < j) {
        if (A[i] + A[j] == X){
            return 1;
        }
        else if (A[i] + A[j] < X)
            i++;
        else
            j--;
    }
    return 0;
}
    
    void mk(TreeNode* root ){
        if(root==NULL) return;
        
        v.push_back(root->val);
        
        mk(root->left);
        mk(root->right);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        mk(root);
        sort(v.begin(),v.end());
        return (bool)isPairSum(v,k);
    }
};
