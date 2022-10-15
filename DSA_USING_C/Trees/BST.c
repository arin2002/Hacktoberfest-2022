#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Arastu
struct node
{
    int key;
    struct node *left;
    struct node *right;
};

int max(int a,int b)
{
    return a>b?a:b;
}

struct node *createNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

//traversals functions
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \t", root->key);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d \t",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d \t",root->key);
    }
}

//insertion function
struct node* insert(struct node *root, int key)
{

    if (root == NULL)
        return createNode(key);

    if (key < root->key)
        root->left  = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);


    return root;
}

// C function to search a given key in a given BST
struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
        return root->key;

    // Key is greater than root's key
    if (root->key < key)
        return search(root->right, key);

    // Key is smaller than root's key
    return search(root->left, key);
}

int findHeight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
        return max(findHeight(root->left),findHeight(root->right))+ 1;
}

int maxValue(struct node *root)
{
    struct node *current=root;
    while(current->right!=NULL)
        current=current->right;
    return current->key;
}

int minValue(struct node *root)
{
    struct node *current=root;
    while(current->left!=NULL)
        current=current->left;
    return current->key;
}

int isBST(struct node *root)
{
    if(root==NULL)
        return 1;
    if(root->left!=NULL && maxValue(root->left)>root->key)
        return 0;
    if(root->right!=NULL && minValue(root->right)<root->key)
        return 0;
    if(!isBST(root->left) || !isBST(root->right))
        return 0;

    return 1;

}

/* Given a binary search tree and a key, this function deletes the key
   and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValue(root->right);

        // Copy the inorder successor's content to this node
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

int main()
{
    int item;
    int search_value;
    struct node *n;
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    printf("the binary tree is:\n");
    inorder(root);
    printf("\n");
    deleteNode(root,80);
     printf("Now the binary tree after deleting one node is:\n");
    inorder(root);
    printf("\n");
    printf("enter the value of the node you want to search:\n");
    scanf("%d",&search_value);
    int k=search(root,search_value);
    if(k!=0)
        printf("the node %d is present\n",k);
    else
        printf("the node is not present in the BST\n");

    printf("The height of the tree is %d \n",findHeight(root));
    printf("The max value of given BST is:%d \n",maxValue(root));
    printf("The min value of given BST is:%d \n",minValue(root));
    printf("\nAnd the ,");

    if(isBST)
        printf("Given tree is a BST\n");
    else
        printf("Given tree is not a bst\n");
}
