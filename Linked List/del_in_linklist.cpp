#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    int data;
    struct Node * next;
};

void linkListTravesral(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}

struct Node * deleteFirst(struct Node * head)
{
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return head;

}

struct Node * deleteAtIndex(struct Node * head, int index)
{
    struct Node *p=head;
    struct Node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);

    return head;

}

struct Node * deleteLast(struct Node * head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

    return head;

}


int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

head=(struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node *)malloc(sizeof(struct Node));
fourth=(struct Node *)malloc(sizeof(struct Node));

head->data=45;
head->next=second;

second->data=43;
second->next=third;

third->data=21;
third->next=fourth;

fourth->data=69;
fourth->next=NULL;

printf("linked list before deletion\n");

linkListTravesral(head);

printf("linked list after deletion\n");

// head=deleteFirst(head);    // uncomment which function you want to run
// head=deleteAtIndex(head,1);
head=deleteLast(head);

linkListTravesral(head);

return 0;
}
