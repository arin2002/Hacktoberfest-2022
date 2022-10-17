/*
    Satyabrat Ojha
    2021IMG-054
*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *searchInBST(Node *root, int val)
{
    if (root == NULL || root->data == val)
        return root;
    else if (val > root->data)
        return searchInBST(root->right, val);
    else
        return searchInBST(root->left, val);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 6);
    // inorder(root);

    if (searchInBST(root, 0))
        cout << "exist";
    else
        cout << "not exist";
    return 0;
}