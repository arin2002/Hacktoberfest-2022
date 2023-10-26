
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next
}nodetype;

nodetype *cir_insert(nodetype*);
void dis(nodetype *);

int main()
{
    int x,ch;
    nodetype *L=NULL;

    while(1)
    {
        printf("\nEnter 1.insert 2,delete 3.display 4.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            L=cir_insert(L);
            break;



        case 3:
            if(L==NULL)
                printf("\nLinked list is empty\n");
            else
            {
                dis(L);
            }
            break;
        case 4:
            printf("\nExiting the program!!!");
            exit(0);
        }
        printf("\nDo u want to continue:\n");
        scanf("%d",&x);
        if(x==0)
            break;
    }
    return 0;
}
nodetype *cir_insert(nodetype *l)
{
    int n;
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));

    if(p)
    {
        printf("Enter the number to be inserted:");
        scanf("%d",&n);

        if(l==NULL)
        {
            l=p;
            l->next=p;
        }
        else
        {
            p->next=l->next;
            l->next=p;
            l=p;
        }
        return l;
    }
}
void dis(nodetype *l)
{
    nodetype *t=NULL;
    t=l;

    do
    {
        printf("%d ",t->data);
        t=t->next;
    }while(t!=l);
}
