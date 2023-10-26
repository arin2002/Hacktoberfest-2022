#include <bits/stdc++.h>

using namespace std;
//program to implement binary search tree
struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
};
struct node *t, *root = NULL;

void insert(int key)
{
    struct node *t = root;
    struct node *r, *p;

    if (root == NULL)
    {
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    else
    {
        while (t != NULL)
        {
            r = t;
            if (key == t->data)
            {
                return;
            }
            else
            {
                if (key < t->data)
                {
                    t = t->lchild;
                }
                else
                {
                    t = t->rchild;
                }
            }
        }
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;

        if (key < r->data)
        {
            r->lchild = p;
        }
        else
            r->rchild = p;
    }
}

void inorder(node *t)
{
    if (t)
    {
        inorder(t->lchild);
        cout << t->data << " ";
        inorder(t->rchild);
    }
}
struct node *search(struct node *t, int key)
{
    if (t->data == key)
    {
        return t;
    }
    else
    {
        if (key < t->data)
        {
            return search(t->lchild, key);
        }
        else
            return search(t->rchild, key);
    }
}

int main()
{
    insert(60);
    insert(6);
    insert(69);
    insert(61);
    insert(22);
    insert(10);
    inorder(root);
    cout<<endl;
    struct node *temp = NULL;
    temp = search(root, 69);
    if (temp)
        cout << "element found" << endl;
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}
