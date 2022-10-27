//Postorder Traversal in Binary Search Tree

#include<iostream>
using namespace std;

//Structure of each node of the tree with data and a pointer each to left and right child
struct node
{
    int data;
    node* left;
    node* right;
};

//A class whose each object represents a tree storing the root of each tree
class tree
{
    public:
    node *root;
    tree()
    {
        root = NULL;
    }

    //createnode function to initialize attributes of each node initially
    node* createnode(int val)
    {
        node *ptr = new node;
        ptr->data = val;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
};

//A function to insert a node according to its value at an appropriate position in a binary search tree
node* insert_node(node *&root, int val)
{
    //For insertion of first node
    if(root == NULL)
    {
        node* ptr = new node;
        ptr->data = val;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
    else if(val < root->data)
    {
        root->left = insert_node(root->left, val);
    }
    else
    {
        root->right = insert_node(root->right, val);
    }
    return root;
}

//Print the postorder traversal of tree recursively as left , right and root
void postorder(node *root)
{
    //The terminating condition for the recursive function when it reaches NULL value
    if(root == NULL)
    {
        return ;
    }

    //Calling for the left subtree
    postorder(root->left);

    //Calling for the right subtree
    postorder(root->right);

    //Printing the root value
    cout<<root->data<<" ";
}


int main()
{
    //Creation of a object of the tree class
    tree t1;

    //All array elements to be inserted in the tree
    int a[] = {5,8,3,4, 2,1,6};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        t1.root = insert_node(t1.root,a[i]);
    }
    cout<<"Postorder of the tree=";
    //Function call
    postorder(t1.root);
}
