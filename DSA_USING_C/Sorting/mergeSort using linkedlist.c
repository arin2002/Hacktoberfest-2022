#include <stdio.h>
#include <stdlib.h>
//Arastu
typedef struct node{
  int data;
  struct node *next;
}Node;

void split(Node *head, Node **front, Node **back){

  Node *fast = head->next;
  Node *slow = head;

  while(fast){
    fast = fast->next;
    if(fast){
      fast = fast->next;
      slow = slow->next;
    }
  }
  *front = head;
  *back = slow->next;
  slow->next = NULL;
}

Node * merge(Node *a, Node *b){
 Node *result = NULL;
 if(a ==  NULL)
   return b;
 else if(b == NULL)
    return a;

 /* For the first node, we would set the result to either a or b */
  if(a->data <= b->data){
    result = a;
    /* Result's next will point to smaller one in lists
    starting at a->next  and b */
    result->next = merge(a->next,b);
   }
   else {
    result = b;
    /*Result's next will point to smaller one in lists
    starting at a and b->next */
    result->next = merge(a,b->next);
   }
   return result;
}

void mergeSort(Node **headRef){
  Node * front, *back;
  Node * head  = *headRef;
  if(head == NULL || head->next == NULL)
    return;

  split(head, &front, &back);
  mergeSort(&front);
  mergeSort(&back);

  *headRef = merge(front, back);
}

void push(Node **headRef, int data){
  Node * new_node  = (Node *)malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = *headRef;
  *headRef  = new_node;
}

void printList(Node * head){
  Node * current = head;
  while(current){
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL");
}
int main(void) {
    // your code goes here
  Node *head = NULL;
  Node *front, *back;
  push(&head,54); push(&head,20); 
  push(&head,80);  push(&head,157); 
  push(&head,239); push(&head,16);
  push(&head,3);  push(&head,642); 
  push(&head,183);  push(&head,98); 
  push(&head,10);  push(&head,74);
  mergeSort(&head);
  printf("\n");
  printList(head);

  return 0;
}
