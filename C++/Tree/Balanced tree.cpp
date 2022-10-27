/*
    Given a binary tree, find if it is height balanced or not. 
    A tree is balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
    Example:    Input: 1, 2, 3, -1, 5, 4, 6, 5, -1, -1, -1, -1, -1, 7            // -1 means no node
                Output: 1                                                             1
                                                                                   /     \
                Time Complexity: O(n)                                             2       3
                Space Complexity: O(n)                                             \     / \
                                                                                    5   4   6
                                                                                             \
                                                                                              7
*/

#include <bits/stdc++.h>
using namespace std;
 
struct Node 
{
    int val;
    struct Node* left;
    struct Node* right;
 
    Node(int data) {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root)
{
    if(!root)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(Node* root)
{
    if(!root)
        return true;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if(abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    return false;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout << isBalanced(root) << "\n";
    return 0;
}