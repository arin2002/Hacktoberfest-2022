#include<stdio.h>
#include<stdlib.h>
//Arastu
struct node{
struct node *left;
struct node *right;
int data;
};

struct node* createNode(int data){
struct node *n;
n = (struct node *)malloc(sizeof(struct node));
n->left=n->right=NULL;
n->data=data;
return n;
}

void deleteTree(struct node *root){
 if(root==NULL)
    return;
 deleteTree(root->left);
 deleteTree(root->right);

 printf("Deleting the element %d\n",root->data);

 free(root);
}

int main(){
    struct node *root=NULL;
root=createNode(10);
root->left=createNode(20);
root->right=createNode(30);
root->left->left=createNode(40);
root->left->right=createNode(50);
root->right->left=createNode(60);

deleteTree(root);

}
