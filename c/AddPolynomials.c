#include<stdio.h> 
#include<stdlib.h>
struct node
{
    int expo ;
    float coeff ;
    struct node *link;
};
struct node* create(struct node *head);
struct node *insert(struct node*head,float co,int ex);
void print(struct node *head);
void polyAdd(struct node *head1,struct node *head2);
int main()
{
    struct node *head1=NULL ;
    struct node *head2=NULL ;
    printf("Enter the first polynomial\n") ;
    head1=create(head1) ;
    printf("Enter the second polynomial\n") ;
    head2=create(head2) ;
    
    
    polyAdd(head1,head2) ;
    return 0;
}
struct node* create(struct node *head)
{
    int n,i,expo;
    float coeff ;
    printf("Enter the number of terms\n");
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("Enter the coeff\n");
        scanf("%f",&coeff);
        printf("Enter the exponent\n");
        scanf("%d",&expo);
        head=insert(head,coeff,expo);
        
    }
}
struct node *insert(struct node*head,float co,int ex)
{
    struct node *temp;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=co ;
    newnode->expo=ex ;
    if(head==NULL || ex>head->expo )
    {
        newnode->link=head ;
        head=newnode ;
    }
    else
    {
        temp=head;
        while(temp->link!=NULL && temp->link->expo > ex)
            temp=temp->link ;
        newnode->link=temp->link ;
        temp->link=newnode ;
        
    }
    return head ;
}
void print(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        struct node *temp=head ;
        while(temp!=NULL)
        {
            printf("(%.1f^%d)",temp->coeff,temp->expo);
            temp=temp->link ;
            if(temp!=NULL)
            printf(" + ");
            else
            printf("\n");
        }
    }
}
void polyAdd(struct node *head1,struct node *head2)
{   
    struct node *head3=NULL;
    struct node *ptr1=head1 ;
    struct node *ptr2=head2 ;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->expo==ptr2->expo)
        {
            head3 = insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }
        else if(ptr1->expo > ptr2->expo)
        {
            head3=insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->link; 
        }
        else if(ptr1->expo<ptr2->expo)
        {
            head3=insert(head3,ptr2->coeff,ptr2->expo) ;
            ptr2=ptr2->link ;
        }
    }
    while(ptr1!=NULL)
    {
        head3=insert(head3,ptr1->coeff,ptr1->expo);
        ptr1=ptr1->link ;
    }
    while(ptr2!=NULL)
    {
        head3=insert(head3,ptr2->coeff,ptr2->expo) ;
        ptr2=ptr2->link ;
    }
    printf("Added polynomial is :\n");
    print(head3) ;
}


