#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *HEAD, *NEW, *PTR;
void check()
{
    char ch;
    printf("Do you want to add(Y/N): ");
    scanf(" %c", &ch);
    while (ch == 'y' || ch == 'Y')
    {
        NEW = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d", &NEW->data);
        NEW->next = NULL;
        PTR->next = NEW;
        PTR = PTR->next;
        printf("Do you want to add(Y/N): ");
        scanf(" %c", &ch);
    }
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
void display()
{
    PTR = HEAD;

    while (PTR != NULL)
    {
        printf("%d ", PTR->data);
        PTR = PTR->next;
    }
}
int main()
{
    HEAD = NULL;
    NEW = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &NEW->data);
    NEW->next = NULL;
    HEAD = NEW;
    PTR = HEAD;
    check();
    display();
    search();
}
