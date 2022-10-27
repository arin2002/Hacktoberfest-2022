#include <stdio.h>
#include <stdlib.h>
 

struct Node
{
    int data;
    struct Node* next;
};
 
// Helper function to print a given linked list
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL");
}
 
// Helper function to insert a new node at the beginning of the linked list
void push(struct Node** head, int data)
{
    // allocate a new node in a heap and set its data
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
 
    // set the `.next` pointer of the new node to point to the current
    // first node of the list.
    newNode->next = *head;
 
    // change the head pointer to point to the new node, so it is
    // now the first node in the list.
    *head = newNode;
}
 
// Recursive function that takes a linked list and returns a complete
// copy of that list
struct Node* copyList(struct Node* head)
{
    if (head == NULL) {
        return NULL;
    }
    else {
        // allocate a new node in a heap using `malloc()` and set its data
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = head->data;
 
        // recursively set the `.next` pointer of the new node by recurring
        // for the rest nodes
        newNode->next = copyList(head->next);
 
        return newNode;
    }
}
 
int main(void)
{
    // input keys
    int keys[] = {1, 2, 3, 4};
    int n = sizeof(keys)/sizeof(keys[0]);
 
    // points to the head node of the linked list
    struct Node* head = NULL;
 
    // construct a linked list
    for (int i = n-1; i >= 0; i--) {
        push(&head, keys[i]);
    }
 
    // copy linked list
    struct Node* dup = copyList(head);
 
    // print duplicate linked list
    printList(dup);
 
    return 0;
}
