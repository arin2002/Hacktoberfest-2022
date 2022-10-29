#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* insertNode(struct node* temp, int x) {
    if(temp == NULL) {
        temp = (struct node*) malloc (sizeof(struct node));
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
    }else if(temp->data>x) {
        temp->left = insertNode(temp->left,x);
    }else {
        temp->right = insertNode(temp->right,x);
    }
    return temp;
}


void mirror(struct node* node) {
if (node==NULL) {
	return;
}
struct node* temp;
mirror(node->left);
mirror(node->right);

temp = node->left;
node->left = node->right;
node->right = temp;
}


void inOrder(struct node* node) {
if (node == NULL)
	return;

inOrder(node->left);
printf("%d ", node->data);
inOrder(node->right);
}

int main(){
    struct node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,6);
    head = insertNode(head,18);
    head = insertNode(head,2);
    head = insertNode(head,16);
    head = insertNode(head, 19);
    head = insertNode(head,9);

    inOrder(head);
    printf("\n");
    mirror(head);
    inOrder(head);

return 0;
}
