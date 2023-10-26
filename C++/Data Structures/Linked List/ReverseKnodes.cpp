#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    // member function
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    { 
        head = n;
        return;
    }
    node *temp = head; // pointer
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// in case of only 1 node
void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;

    delete toDelete;
}

void deletion(node *&head, int val)
{

    if (head == NULL)
        return;
    if (head->next == NULL)
        deleteAtHead(head);
    node *temp = head;
    // here we are selecting the node before our desired node

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    // node *toDelete = temp->next;

    temp->next = temp->next->next;
    // delete toDelete;
}

// reverse a linked list(iterative)
node *reverse(node *&head)
{
    node *prvptr = NULL;
    node *curptr = head;
    node *nextptr;
    while (curptr != NULL)
    {
        nextptr = curptr->next;
        curptr->next = prvptr;
        prvptr = curptr;
        curptr = nextptr;
    }
    return prvptr;
}

// recursive way to reverse a linked list
node *reverseRecursive(node *&head)
{
    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
    if (head == NULL || head->next == NULL)
        return head;
}

node *reversek(node *&head, int k)
{
    node *prvptr = NULL;
    node *curptr = head;
    node *nextptr;
    int count = 0;
    while (curptr != NULL && count < k)
    {
        nextptr = curptr->next;
        curptr->next = prvptr;
        prvptr = curptr;
        curptr = nextptr;
        count++;
    }
    // return prvptr;
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prvptr;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    // insertAtTail(head, 6); 
    display(head);
    // node *newHead = reverse(head);
    // node *newHead = reverse(head);
    node *newHead = reversek(head, 2);
    display(newHead);
}
