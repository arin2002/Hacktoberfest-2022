// this is leetcode question same code u can do in the leetcode also it will run all the test cases 
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// max height of a binary tree
int maxheight(Node * root,int &diameter){
    if(root==NULL) return 0;
    int lh=maxheight(root->left,diameter);
    int rh=maxheight(root->right,diameter);
    diameter=max(diameter,(lh+rh));
    return 1+ max(lh,rh);
}
int DiameterofBinarytree(Node * root){ // will give the height of the binary tree 

    int diameter=0;
    maxheight(root,diameter);
    return diameter;

}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(22);
    root->right->left = new Node(12);
    root->right->right = new Node(86);
 
cout<<DiameterofBinarytree(root)<<" ";
  
    
    return 0;
}
  
