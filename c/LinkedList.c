#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *HEAD = NULL, *NEW = NULL, *PTR = NULL;
void check()
{
    int ch;
    printf("Enter your choice: ");
    scanf(" %d", &ch);
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
        {
            if (HEAD == NULL)
            {
                NEW = (struct Node *)malloc(sizeof(struct Node));
                printf("Enter the value: ");
                scanf("%d", &NEW->data);
                NEW->next = NULL;
                HEAD = NEW;
                PTR = HEAD;
            }
            else
            {
                NEW = (struct Node *)malloc(sizeof(struct Node));
                printf("Enter the value: ");
                scanf("%d", &NEW->data);
                NEW->next = HEAD;
                HEAD = NEW;
            }
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        }
        case 2:
            insert_last();
            PTR = HEAD;
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        case 3:
            insert_pos();
            PTR = HEAD;
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        case 4:
            delf();
            PTR = HEAD;
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        case 5:
            dell();
            PTR = HEAD;
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        case 6:
            del_pos();
            PTR = HEAD;
            display();
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        case 7:
            search();
            PTR = HEAD;
            printf("Enter your choice: ");
            scanf(" %d", &ch);
            break;
        default:
            printf("Program exited....");
            exit(0);
        }
    }
}
void delf()
{
    if (HEAD == NULL)
    {
        printf("Not Possible.");
        exit;
    }
    struct Node *temp;
    temp = HEAD;
    HEAD = HEAD->next;
    free(temp);
}
void dell()
{
    if (HEAD == NULL)
    {
        printf("Not Possible.");
        exit;
    }
    PTR = HEAD;
    struct Node *temp;
    while ((PTR->next)->next != NULL)
    {
        PTR = PTR->next;
    }
    temp = PTR->next;
    PTR->next = NULL;
    free(temp);
}
void del_pos()
{
    if (HEAD == NULL)
    {
        printf("Not Possible.");
        exit;
    }
    int count = 1;
    printf("Enter positon: ");
    int pos;
    scanf(" %d", &pos);
    PTR = HEAD;
    struct Node *temp;
    while (PTR != NULL && count != pos - 1)
    {
        PTR = PTR->next;
        count++;
    }
    temp = PTR->next;
    PTR->next = temp->next;
    free(temp);
}
void insert_pos()
{
    int count = 1;
    printf("Enter positon: ");
    int pos;
    scanf("%d", &pos);
    PTR = HEAD;
    NEW = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &NEW->data);
    while (PTR != NULL && count != pos - 1)
    {
        PTR = PTR->next;
        count++;
    }
    NEW->next = PTR->next;
    PTR->next = NEW;
}
void insert_last()
{
    PTR = HEAD;
    while (PTR->next != NULL)
    {
        PTR = PTR->next;
    }
    NEW = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &NEW->data);
    NEW->next = NULL;
    PTR->next = NEW;
}
void search()
{
    PTR = HEAD;
    int key, f = -1;
    printf("Enter search element:");
    scanf("%d", &key);
    int t = -1;
    while (PTR != NULL)
    {
        t++;
        if ((PTR->data) == key)
        {
            f = 0;
            break;
        }
        PTR = PTR->next;
    }
    if (f == 0)
        printf("Found at: %d", t);
    else
        printf("Not found!");
}
void cases()
{
    printf("Enter 1 for adding a node at start.\n");
    printf("Enter 2 for adding a node at last.\n");
    printf("Enter 3 for adding a node at a position.\n");
    printf("Enter 4 for deleting first node.\n");
    printf("Enter 5 for deleting last node.\n");
    printf("Enter 6 for deleting node at a position.\n");
    printf("Enter 7 to search.\n");
    printf("Press any other key to exit.\n");
}
void display()
{
    PTR = HEAD;

    while (PTR != NULL)
    {
        printf("%d ", PTR->data);
        PTR = PTR->next;
    }
    printf("\n");
}
int main()
{
    int ch;
    HEAD = NULL;
    NEW = (struct Node *)malloc(sizeof(struct Node));
    cases();
    check();
    printf("Enter the value: ");
    scanf("%d", &NEW->data);

    NEW->next = NULL;
    HEAD = NEW;
    PTR = HEAD;
    display();
}
