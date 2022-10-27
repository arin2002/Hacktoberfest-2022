#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
// Insert Method
struct Node *Insertion(struct Node *head,int data,int index){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    struct Node *ptr = head;
    int i = 0;
    while(i != index-1){
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    ptr->next = p;
    return head;
}
int main(){
    struct Node *head;
    struct Node *member1;
    struct Node *member2;
    struct Node *member3;
    struct Node *member4;

    head = (struct Node *)malloc(sizeof(struct Node));
    member1 = (struct Node *)malloc(sizeof(struct Node));
    member2 = (struct Node *)malloc(sizeof(struct Node));
    member3 = (struct Node *)malloc(sizeof(struct Node));
    member4 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = member1;
    member1->data = 2;
    member1->next = member2;
    member2->data = 3;
    member2->next = member3;
    member3->data = 4;
    member3->next = member4;
    member4->data = 5;
    member4->next = NULL;
    printf("Calling Before Insertion !");
    display(head);
    head = Insertion(head,10,2);
    printf("\nCalling After Insertion !");
    display(head);
    return 0;
}