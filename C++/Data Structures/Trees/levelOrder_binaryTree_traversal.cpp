/* Program for Level Order Traversal of Binary Tree.
 Approach used: Used Queue Data Structure for the Implementation. 
 In this Program we can Level order Traverse the whole tree OR a particular level.

 level_order_traversal(root) -> Traverse the whole tree.
 print_level(root, level) -> Traverse only given level

 Author: Harsh Verma */


#include<iostream>
#include<queue>

using namespace std;

// Binary Tree Structure
class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to Create Binary Tree
Node* createTree(){
    int data;
    cin>> data;
    if(data == -1)  return NULL;
    Node* root = new Node(data);
    cout<<"Enter Data for left of :"<<data<<endl;
    root -> left = createTree();
    cout<<"Enter Data for right of :"<<data<<endl;
    root -> right = createTree();
    return root;
}

// Function to print the given Level
void print_level(Node* root, int level){
    if(root == NULL)    return;
    if(level == 1)  cout<<root-> data<<" ";
    else if(level > 1){
        print_level(root -> left, level-1 );
        print_level(root -> right, level-1 );
    }
}
// Function to Calculate the Height of Binary Tree
int height(Node* root){
    if(root == NULL)    return 0;
    return max(height(root -> left), height(root -> right)) + 1;
}
// Function for Level Order Traversal of Binary Tree
void level_order_traversal(Node* root){
    queue<Node*> queue;
    queue.push(root);
    queue.push(NULL);
    while(!queue.empty()){
        if(queue.front() == NULL){
            if(queue.empty())   return;
            queue.push(NULL);
            cout<<endl;
            queue.pop();
        }
        Node* cur = queue.front();
        cout<<cur -> data;
        queue.pop();
        if(cur -> left != NULL)
            queue.push(cur -> left);
        if(cur -> right != NULL)
            queue.push(cur -> right);

    }
}
int main(){
    // Creating a Binary Tree
    Node* root = createTree();
    cout<<"Level Order Traversal by loop"<<endl;
    // using print_level function we can itterate to every level in binary tree.
    for(int i = 1; i<= height(root); i++)
    print_level(root, i);
    cout<<endl<<"Level Order Traversal by Queue"<<endl;
    level_order_traversal(root);
    return 0;
}