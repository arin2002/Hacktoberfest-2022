#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* head=NULL;

void addAtBeginning(int x) {
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->link=head;
    head=temp;
    temp->data = x;
}

void addInMiddle(int x,int n) {
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node* temp1 = head;
    for(int i=0;i<n-1;i++) {
        temp1=temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
    temp->data=x;
}

void addAtEnd(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    struct node* temp1 = head;
    while(temp1->link!=NULL) {
        temp1=temp1->link;
    }
    temp1->link=temp;
    temp->data = x;
}

void deleteInMiddle(int n) {
    struct node* temp = head;
    for(int i=0;i<n/2;i++) {
        temp=temp->link;
    }
    temp->link = temp->link->link;
}

void deleteLastNode() {
    struct node* temp = head;
    while(temp->link->link != NULL) {
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;
}

void printEven() {
    struct node* temp =head;
    int count=0;
    while(temp != NULL) {
        count++;
        if (count%2==0) printf("%d ", temp->data);
        temp=temp->link;
    }
    printf("\n");
}

void printOddSum() {
    struct node* temp = head;
    int sum=0, count = 0;
    while(temp->link !=NULL) {
        count++;
        if(count%2) sum+=temp->data; 
        temp = temp->link;
    }
     count++;
        if(count%2) sum+=temp->data;
    printf("%d \n",sum);
}

void reverseLinkedList() {
    struct node* temp = head;
    struct node* nxt = NULL;
    struct node* prev = NULL;
    do{
        nxt = temp->link;
        temp->link = prev;
        prev=temp;
        temp=nxt;
    }while (temp != NULL);
    head=prev;
}

void deleteAlternateNodes() {
    head = head->link;
    struct node* temp = head;
    struct node* temp1 = head->link;
    while (temp != NULL && temp1 != NULL) {
        temp->link = temp1->link;
        temp = temp->link;
        if(temp!=NULL) temp1 = temp->link;
    }
}

void printList() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    addAtBeginning(7);
    printList();
    addAtEnd(15);
    printList();
    addInMiddle(42,1);
    printList();
    addAtBeginning(14);
    printList();
    addInMiddle(76,3);
    printList();
    deleteInMiddle(3);
    printList();
    deleteLastNode();
    printList();
    printEven();
    printOddSum();
    reverseLinkedList();
    printList();
    addAtEnd(20);
    printList();
    deleteAlternateNodes();
    printList();

}
