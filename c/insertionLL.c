//insertion in a linked list 
#include<stdio.h> 
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
} ;
void traverse(struct node *ptr) ;
struct node * insertionAtFirst(struct node *a,int data) ;
struct node * insertionAtIndex(struct node *a,int data,int index) ;
struct node * end(struct node *a,int data) ;
struct node * insertionAfterNode(struct node *a,struct node *node,int data) ;

int main()
{
    struct node *a,*b,*c,*d ;
    a =(struct node*)malloc(sizeof(struct node)) ;
    b=(struct node*)malloc(sizeof(struct node))  ;
    c=(struct node*)malloc(sizeof(struct node))  ;
    d=(struct node*)malloc(sizeof(struct node))  ;
    
    a->data = 80 ;
    a->next = b  ;
    
    b->data = 70 ;
    b->next = c  ;
    
    c->data = 90;
    c->next = d ;
    
    d->data= 100 ;
    d->next = NULL ;
    
    traverse(a) ;
    //a=insertionAtFirst(a,78) ;
   // a=insertionAtIndex(a,23,3) ;
   // a=end(a,67) ;
   a=insertionAfterNode(a,b,67) ;
    traverse(a) ;
    return 0 ;
}
void traverse(struct node *ptr)
{
    printf("The elements in the linked list are\n") ;
    while(ptr!= NULL)
    {
        printf("%d\n",ptr->data) ;
        ptr=ptr->next ;
    }
}
struct node * insertionAtFirst(struct node *a,int data)
{
   struct node * ptr=(struct node *)malloc(sizeof(struct node)) ;
    ptr->data=data ;
    ptr->next=a ;
    return ptr ;
}
struct node * insertionAtIndex(struct node *a,int data,int index)
{
       struct node * ptr=(struct node *)malloc(sizeof(struct node)) ;
       struct node *p = a ;
       int i=0 ;
       while(i!= index-1)
       {
           p=p->next ;
           i++ ;
       }
       ptr->data = data ;
       ptr->next = p->next ;
       p->next = ptr ;
       return a  ;
}
struct node * end(struct node *a,int data)
{
           struct node * ptr=(struct node *)malloc(sizeof(struct node)) ;
               struct node *p = a ;
           while(p->next != NULL)
           {
               p=p->next ;
           }
           p->next = ptr ;
           ptr->data = data ;
           ptr->next=NULL ;
           return a ;
}
struct node * insertionAfterNode(struct node *a,struct node *node,int data)
{
               struct node * ptr=(struct node *)malloc(sizeof(struct node)) ;
               ptr->data = data ;
               
               ptr->next = node->next ;
               node->next = ptr ;
               
               return a ;
    
}


