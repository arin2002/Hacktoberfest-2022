#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int x;
	struct node *next;
}*top;
int size=0;
void push();
int pop();
int peek();
int count();
void displayStack();
int main()
{
	int op,value;
	printf("\nEnter the maximum size of the stack : ");
	scanf("%d",&size);
	do{
		printf("\n...MENU...\n1)Push node\n2)Pop node\n3)Peek\nEnter 0 for EXIT\nEnter your option :");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				push();
				break;
			case 2:
                if(top==NULL)
                    printf("\nStack Underflow.");
                else
				{
				    value=pop();
				    printf("\n%d successfully popped from the stack.",value);
				}
				break;
			case 3:
			    if(top==NULL)
                    printf("\nStack Underflow.");
                else
                {
                    value=peek();
                    printf("\nYou are peeking at : %d",value);
                }
				break;
			case 0:
				printf("\n...BYE BYE!...");
				break;
			default :
				printf("\nINVALID option");
				break;
		}
		displayStack();
	}while(op!=0);
	getch();
}
int count()         //to count no. of elements in the stack
{
    struct node *ptr=top;
    int c;
    if(top==NULL)
        return 0;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
        }
    return c;
}
void push()             //pushes one element to the beginning/top of the stack
{
	if(count()>=size)
	{
		printf("\nStack Overflow");
		return;
	}
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value to push : ");
	scanf("%d",&ptr->x);
	ptr->next=top;
	top=ptr;
}
int pop()                   //returns the topmost element of the stack,and removes it from the stack
{
	struct node *ptr;
	int value;
	ptr=top;
	value=top->x;
	top=top->next;
	free(ptr);
	return value;
}
int peek()                  //returns the topmost element of the stack,without modifying the stack
{
	return top->x;
}
void displayStack()         //to print the contents of the stack
{
	struct node *ptr;
	ptr=top;
	if(top==NULL)
		printf("\nStack is empty");
    else
    {
        printf("\nElements of the Stack(From top to bottom):");
        while(ptr!=NULL)
        {
            printf(" %d\t",ptr->x);
            ptr=ptr->next;
        }
    }
}
