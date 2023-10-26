#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left,*right;
    Node(int x)
    {
        key=x;
        left=right=nullptr;
    }
};

Node* insert(Node* root,int x) //insertion in BST is always in leaf node
{
    if(root==NULL) //time to craete the node as we have reached a leaf end
    {
        root=new Node(x);
        return root;
    }
    if(root->key < x)   //value is larger so it has to go in right subtree
        root->right=insert(root->right,x);
    else if(root->key > x) //value is smaller so it has to go in left subtree
        root->left=insert(root->left,x);
    return root;
}

void search(Node* root,int val)
{
    //using BST property, left child is smaller value and right side is bigger
    while(root)
    {
        if(root->key==val) 
        {
            cout<<val<<" is found in BST!\n";
            return;
        }
        if(root->key < val) root=root->right; //value is bigger so it might be in right subtree
        else root=root->left;
    }
    cout<<val<<" is not found in BST!\n";
}

void displayInorder(Node* root)
{
    if(root==NULL) return;
    //doing inorder travsersal of binary tree, in BST inorder is always in sorted form
    displayInorder(root->left);
    cout<<root->key<<" ";
    displayInorder(root->right);
}

int main() {
	Node *root=NULL;
	root=insert(root,5);
	root=insert(root,10);
	root=insert(root,7);
	root=insert(root,1);
	root=insert(root,3);
	root=insert(root,9);
	cout<<"Current BST is\n";
	
	displayInorder(root);
    cout<<"\n";
    search(root,5);
    search(root,0);
    search(root,50);
    search(root,10);
	return 0;
}
