#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkListTravesral(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

int main()
{
    int num;
    struct Node *head;
    // struct Node *second;
    // struct Node *third;
    // struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    // second=(struct Node *)malloc(sizeof(struct Node));
    // third=(struct Node *)malloc(sizeof(struct Node));
    // fourth=(struct Node *)malloc(sizeof(struct Node));

    // head->data=45;
    // head->next=second;

    // second->data=43;
    // second->next=third;

    // third->data=21;
    // third->next=fourth;

    // fourth->data=45;
    // fourth->next=NULL;
    
    for (int i = 0; i <4; i++)
    {
        printf("enter data");
        scanf("%d", &num);
        struct Node *ptr;
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = num;
        ptr->next = NULL;
        struct Node *q = head;
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = ptr;
        }
    }

    printf("linked list before insertion\n");

    linkListTravesral(head);

    printf("linked list after insertion\n");
    // uncomment these line to form these action also 
    // head=insertAtFirst(head,79);
    // head=insertAtIndex(head,89,1);
    // head=insertAtLast(head,90);
    // linkListTravesral(head);

    return 0;
}
