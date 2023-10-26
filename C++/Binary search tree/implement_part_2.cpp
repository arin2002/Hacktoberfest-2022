#include <bits/stdc++.h>

using namespace std;
//program to implement [insert,search function] in  binary search tree using recursion
struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
};
struct node *t = NULL;
node *insert(node *t, int key)
{
    struct node *r, *p;
    if (t == NULL)
    {
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        return p;
    }
    if (key < t->data)
    {
        t->lchild = insert(t->lchild, key);
    }
    else
    {
        if (key > t->data)
        {
            t->rchild = insert(t->rchild, key);
        }
    }
    return t;
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
struct node *search(node *t, int key)
{
    while (t != NULL)
    {
        if (key == t->data)
        {
            return t;
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
    return 0;
}
void check(struct node *temp)
{
    if (temp)
        cout << "element found" << endl;
    else
    {
        cout << "element not found" << endl;
    }
}

int main()
{
    struct node *root = NULL;
     root = insert(root, 60);
    insert(root, 6);
    insert(root, 69);
    insert(root, 61);
    insert(root, 22);
    insert(root, 10);
    inorder(root);
    cout << endl;
    struct node *temp = NULL;
    temp = search(root, 61);
    check(temp);
    temp = search(root, 20);
    check(temp);

    return 0;
}