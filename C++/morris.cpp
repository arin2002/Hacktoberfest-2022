#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
   struct Node* left;
   struct Node* right;

    Node(int val){
       data = val;
       left = NULL;
       right = NULL;
    }
};

void morris(Node* root){
    Node* curr;
    Node* pre;
    if(root==NULL){
        return;
    }
    curr = root;
    while(curr!=NULL){
        if(curr->left==NULL){
            cout << curr->data << " ";
            curr = curr->right;
        }
        else{
            pre = curr->left;
            while(pre->right!=NULL && pre->right!=curr)
                pre = pre->right;
            
            if(pre->right==NULL){
                pre->right = curr;
                curr = curr->left;
            }
            else{
                pre->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    morris(root);
    return 0;
}