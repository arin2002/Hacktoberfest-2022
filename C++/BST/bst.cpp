#include <iostream>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct node *search(struct node *ptr, int sk)
{
    if (ptr == NULL)
    {
        cout << "Key not Found" << endl;
        return NULL;
    }
    else if (sk < ptr->data) // Search the key in LST
        return search(ptr->lchild, sk);
    else if (sk > ptr->data) // Search the key in RST
        return search(ptr->rchild, sk);
    else
        return ptr;
}
struct node *add(struct node *ptr, int k)
{
    if (ptr == NULL)
    {
        ptr = new node();
        ptr->data = k;
        ptr->lchild = NULL;
        ptr->rchild = NULL;
    }
    else if (k < ptr->data) //Insert the key in LST
        ptr->lchild = add(ptr->lchild, k);
    else if (k > ptr->data) //Insert the key in RST
        ptr->rchild = add(ptr->rchild, k);
    else
        cout << "Key is Duplicate" << endl;
    return ptr;
}
struct node *del(struct node *ptr, int k)
{
    struct node *tmp, *q;
    if (ptr == NULL)
    {
        cout << "Key Not Found" << endl;
        return ptr;
    }
    if (k < ptr->data) //Delete the key from LST
        ptr->lchild = del(ptr->lchild, k);
    else if (k > ptr->data) //Delete the key from RST
        ptr->rchild = del(ptr->rchild, k);
    else
    {
        if (ptr->lchild != NULL && ptr->rchild != NULL)
        {
            q = ptr->rchild;
            while (q->lchild)
                q = q->lchild;
            ptr->data = q->data;
            ptr->rchild = del(ptr->rchild, q->data);
        }
        else
        {
            tmp = ptr;
            if (ptr->lchild != NULL)
                ptr = ptr->lchild;
            else if (ptr->rchild != NULL)
                ptr = ptr->rchild;
            else
                ptr = NULL;
            delete tmp; //Deleting temporary pointer
        }
    }
    return ptr;
}
void pre(struct node *ptr)
{
    if (ptr == NULL) //Base Case
        return;
    cout << ptr->data << endl;
    pre(ptr->lchild); //Recursive Case
    pre(ptr->rchild);
}
void in(struct node *ptr)
{
    if (ptr == NULL) //Base Case
        return;
    in(ptr->lchild); //Recursive Case
    cout << ptr->data << endl;
    in(ptr->rchild);
}
void post(struct node *ptr)
{
    if (ptr == NULL) //Base Case
        return;
    post(ptr->lchild); //Recursive Case
    post(ptr->rchild);
    cout << ptr->data << endl;
}
//Main Function
main()
{
    struct node *root = NULL, *ptr;
    int ch, key;
    do
    {
        //Menu Options -
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Preorder" << endl;
        cout << "4. Inorder" << endl;
        cout << "5. Postorder" << endl;
        cout << "6. Search" << endl;
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter key to be inserted: " << endl;
            cin >> key;
            root = add(root, key); //Inserting new node in the BST
            break;
        case 2:
            cout << "Enter key to be deleted: " << endl;
            cin >> key;
            root = del(root, key); //Deleting node from the BST
            break;
        case 3:
            pre(root); //Preorder Traversal of the BST
            break;
        case 4:
            in(root); //Inorder Traversal of the BST
            break;
        case 5:
            post(root); //Postorder Traversal
            break;
        case 6:
            cout << "Enter key to be searched: " << endl;
            cin >> key;
            ptr = search(root, key); //Searching data in the BST
            if (ptr != NULL)         //Leaf Node encountered
                cout << "Found" << endl;
            break;
        }
    } while (1);
}