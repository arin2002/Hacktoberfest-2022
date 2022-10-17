#include <stdio.h>
#include <stdlib.h>
  
/* A structure of linked list node */
struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
/* 
Given a Inserts a node in front of a singly linked list. 
*/
void insert(int num) {
    /* Create a new Linked List node */
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    /* Next pointer of new node will point to head node of linked list  */
    newNode->next = head;
    /* make new node as new head of linked list */
    head = newNode;
    printf("Inserted Element : %d\n", num);
}
 
void findloop(struct node *head) {
    struct node *slow, *fast;
    slow = fast = head;
   
    while(slow && fast && fast->next) {
        /* Slow pointer will move one node per iteration whereas 
        fast node will move two nodes per iteration */
        slow = slow->next;
        fast  = fast->next->next;
        if (slow == fast) {
           printf("Linked List contains a loop\n");
           return;
        }
    }
    printf("No Loop in Linked List\n");
}
/*
 Prints a linked list from head node till tail node 
*/
void printLinkedList(struct node *nodePtr) {
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    initialize();
    /* Creating a linked List*/
    insert(8);  
    insert(3); 
    insert(2); 
    insert(7);
    insert(9);
     
    /* Create loop in linked list. Set next pointer of last node to second node from head */
    head->next->next->next->next->next = head->next;
 
    findloop(head);
    return 0;
}
Output
Inserted Element : 8
Inserted Element : 3
Inserted Element : 2
Inserted El
