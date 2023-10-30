// Check if two given binary trees are identical or not
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

bool identicalTree(node *a, node *b)
{
    if (a == NULL || b == NULL)
    {
        return (a == b);
    }

    return (a->data == b->data) && identicalTree(a->left, b->left) && identicalTree(a->right, b->right);
}

int main()
{
    struct node *root1 = newNode(5);
    root1->left = newNode(9);
    root1->right = newNode(20);
    struct node *root2 = newNode(5);
    root2->left = newNode(9);
    root2->right = newNode(20);

    if (identicalTree(root1, root2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}