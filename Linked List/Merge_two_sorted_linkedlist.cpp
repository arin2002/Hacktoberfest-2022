#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

void display(struct node *head)
{
    if(head==NULL)
    cout<<"NULL";
    else{

        cout<<head->data<<" ";
        display(head->next);
    }
}

struct node* SortedMerge(struct node* a, struct node* b)
{
	struct node* result = NULL;


	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);

	if (a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return(result);
}

int main()
{
    int i,n1,n2;
    struct node *head1,*prev1,*p1;
    cout<<"size of ll1:";
    cin>>n1;
    head1=NULL;
    for(i=0;i<n1;i++)
    {
        p1=(node*)malloc(sizeof(node));
        cin>>p1->data;
        if(head1==NULL)
        head1=p1;
        else
        prev1->next=p1;
        prev1=p1;
    }

      struct node* res = NULL;
     struct node *head2,*prev2,*p2;
    cout<<"size of ll2:";
    cin>>n2;
    head2=NULL;
    for(i=0;i<n2;i++)
    {
        p2=(node*)malloc(sizeof(node));
        cin>>p2->data;
        if(head2==NULL)
        head2=p2;
        else
        prev2->next=p2;
        prev2=p2;
    }

    	res = SortedMerge(head1, head2);

	cout << "Merged Linked List is: \n";
	display(res);


    return 0;
}
