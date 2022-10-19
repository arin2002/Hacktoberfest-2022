/* IMPLEMENT :
1. STACK OPERARTION USING SLL
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* push(struct node* first, int d){
    struct node* temp = first;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
    if(first==NULL){
        ptr->next=NULL;
        first = ptr;
        return first;
    }
    while(temp->next){
        temp = temp->next;
    }
    ptr->next = first;
    first = ptr;
    return first;
}

int pop(struct node* first){
    if(first == NULL){
        printf("Empty stack\n");
    }
    struct node* ptr = first;
    first = first->next;
    return ptr;
}

void top(struct node* first){
    // printf("ddd");
    if(first==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node* temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    printf("%d ",temp->data);
    return;
}

int main(){
    struct node* first = NULL;
    first = push(first,5);
    // first = pop(first);
    printf("%d ",*pop(first));
    top(first);
    return 0;
}