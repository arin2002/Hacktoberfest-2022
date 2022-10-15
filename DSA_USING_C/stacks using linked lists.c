#include<stdio.h>
#include<stdlib.h>
//Arastu
struct node
{
int data;
struct node*next;
};


//int is_empty(struct node*);
void push_an_element(int ,struct node*);
int pop_an_element(struct node*);
void display_stack(struct node*);
int top_element(struct node*);
void delete_stack(struct node*);


struct node*create_stack()
{
struct node*ptr;
ptr=malloc(sizeof(struct node*));
ptr->data=0;
ptr->next=NULL;
return ptr;
}

int main()
{
int i,data_value,data_2;
int k;
struct node *head;
head=create_stack();
char ch='y';
printf("\n");

	do
	{
		printf("menu of operations to be performed:\n");
        printf("1.push an element into stack\n");
		printf("2.pop an element\n");
		printf("3.display stack\n");
		printf("4.what is top element?\n5.delete stack\n6.exit\n");
        printf("enter your choice from menu:\n");
        scanf("%d",&k);
    switch(k)
		{
			case 1:printf("enter data to be pushed:\n");
        scanf("%d",&data_value);
        push_an_element(data_value,head);
        display_stack(head);
        break;

	case 2: data_value=pop_an_element(head);
            printf("the popped element is:%d\n",data_value);
            display_stack(head);

        break;

	case 3:printf("my stack is:\n");
	display_stack(head);
	break;

	case 4:
    data_value=top_element(head);
    printf("top element is=%d\n",data_value);
    break;

    case 5:
        if(ch=='y')
        {delete_stack(head);
        }
        break;

    case 6:break;

    default: printf("please enter any one choice:\n");

		}
	}
	while(k!=6 || k>6);

    return 0;
}

void push_an_element(int data_value ,struct node* ptr)
{
     struct node*temp;
     temp=malloc(sizeof(struct node*));
     temp->data=data_value;
        if (ptr->next==NULL)
        {
            temp->next=ptr->next;
            ptr->next=temp;
        }
        else
        {
          temp->next=ptr->next;
          ptr->next=temp;
        }
}
int pop_an_element(struct node*ptr)
{

 struct node*temp;
 if(ptr->next==NULL)
   {printf("underflow/n");
   return;}
    int data;
 if((ptr->next)->next==NULL)
 {
     temp=ptr->next;
     data=temp->data;
     ptr->next=NULL;
     free(temp);
 }
 else
    {
        temp=ptr->next;
        data=temp->data;
        ptr->next=(ptr->next)->next;
        free(temp);
    }
    return data;
}

void display_stack(struct node*ptr)
{

    if(ptr->next==NULL)
     {
         printf("stack is empty underflow condition\n");
         return;
         }
    printf("TOP->");
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        printf("%d->",ptr->data);
    }
    printf("NULL\n");
}

int top_element(struct node *ptr)
{
int data;
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node*));
temp=ptr->next;
data=temp->data;
return data;
}

void delete_stack(struct node*ptr)
{
struct node*temp;
while(ptr->next!=NULL)
{
    temp=ptr->next;
    ptr->next=temp->next;
    free(temp);
}
printf("the Stack is deleted\n");
}



