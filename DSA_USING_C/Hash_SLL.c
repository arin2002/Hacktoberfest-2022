#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *Ht[10];
void insert(int x);
void display();
void search(int x);
//void delete(int x);

int main()
{
	int i,data,choice;
	for(i=0;i<10;i++)
	{
		Ht[i]=NULL;
	}
	printf("1. Insert.\n2. Display .\n3. Search.\n4. Delete.\n5. Exit.\n");
	while(1)
	{
		printf("\nenter your choice: ");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1: printf("\nenter the element to be inserted: ");
 			scanf("%d", &data);
 			insert(data);
 			break;
 		case 2: display();
 			break;
 		case 3: printf("\nenter the element to be search: ");
 			scanf("%d", &data);
 			search(data);
 			break;	
		case 4: printf("\nenter the element to be Deleted: ");
 			scanf("%d", &data);
 			//Delete(data);
 			break;
		
		case 5: exit(1);
 		default: printf(" wrong choice: ");	
		 
		}
		
	};
	return 0;
}
void insert(int x)
{
	struct node *ptr,*temp;
	int y;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Memory not alloted");
		return;
	}
	ptr->data=x;
	ptr->next=NULL;
	y=x%10;
	if(Ht[y]==NULL)
	{
		Ht[y]=ptr;
		return;
	}
	temp=Ht[y];
	while(temp->next!=NULL)
	{
		temp=temp->next;
	} 
	temp->next=ptr;
}
void display()
{
	int i;
	struct node *ptr;
	for(i=0;i<10;i++)
	{
		ptr=Ht[i];
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		
	}
}
void search(int x)
{
	int i;
	struct node *temp;
	i=x%10;
	temp=Ht[i];
	while(temp!=NULL&&temp->data!=x)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("X not found");
		return;
	}
	printf("X found");
	return;
}











