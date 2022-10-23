// C++ program to reverse alternate k nodes in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

Node *kAltReverse(Node *head, int k)
{
	Node* current = head;
	Node* next;
	Node* prev = NULL;
	int count = 0;
	while (current != NULL && count < k)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	count++;
	}
	
	if(head != NULL)
	head->next = current;
	count = 0;
	while(count < k-1 && current != NULL )
	{
	current = current->next;
	count++;
	}

	if(current != NULL)
	current->next = kAltReverse(current->next, k);
	return prev;
}
/* Function to push a node */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);	

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

void printList(Node *node)
{
	int count = 0;
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
		count++;
	}
}

/* Driver code*/
int main(void)
{
	/* Start with the empty list */
	Node* head = NULL;
	int i;
	
	// create a list 1->2->3->4->5...... ->20
	for(i = 20; i > 0; i--)
	push(&head, i);

	cout<<"Given linked list \n";
	printList(head);
	head = kAltReverse(head, 3);

	cout<<"\n Modified Linked list \n";
	printList(head);
	return(0);
}

