// this is the demonstration for the linked list data structures
// here I am creating a linked list with various functions :)
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // reference type...
};

void printll(Node *n)
{
    // this is used to print the values in the linked list
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL" << endl;
}

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void pushprev(Node *prev_node, int new_data) // will insert the data at the middle
{
    if (prev_node == NULL) // this is the exception
    {
        cout << "The list is empty bruh:(\n";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void pushback(Node **head_ref, int new_data)
{
    // creating new space for the linked list
    Node *new_node = new Node();
    Node *last = *head_ref;    // to save the ref pointer of the head
    new_node->data = new_data; // asigning data to the linked list
    new_node->next = NULL;     // since it is the last element

    // if there are no elements in the list
    if (*head_ref == NULL)
    {
        new_node = *head_ref;
        return;
    }
    // traversing through the linked list to get to the last node....this is also a limitation of linked list
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void delbeg(Node *head)
{
    // Node temp=new Node();
    // temp=head;
    head = head->next;

    // free(temp);
    // delete temp;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    push(&head, 10);
    pushprev(second, 69);

    pushback(&head, 30);

    // delbeg(head);
    printll(head);
}