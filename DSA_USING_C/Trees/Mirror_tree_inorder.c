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
n->left=NULL;
n->right=NULL;
n->data=data;
return n;
}

void mirror(struct node *root) {
struct node *temp;
if(root==NULL)
    return;
else{
    mirror(root->left);
    mirror(root->right);
    //SWAP RIGHT AND LEFT
    temp=root->left;
    root->left=root->right;
    root->right=temp;
}
}

void inOrder(struct node *root){
if(root!=NULL){
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
	}
}



int main(){
    struct node *root=NULL;
root=createNode(10);
root->left=createNode(20);
root->right=createNode(30);
root->left->left=createNode(40);
root->left->right=createNode(50);
root->right->left=createNode(60);

printf("The inorder traversal is ");
inOrder(root);

mirror(root);
printf("\n");
printf("\n");
printf("\n");
printf("The inorder traversal after mirroring is ");
inOrder(root);

}
