#include <iostream>
using namespace std;


struct node {
	int data;
	node* next;
};


void insert(node** link, int item)
{
	node* temp = new node;
	temp->data = item;
	temp->next = *link;
	*link = temp;
}

void display(node* link)
{
	while (link != NULL) {
		cout << link->data << " ";
		link = link->next;
	}
}

node *arrayToList(int arr[], int n)
{
	node *link = NULL;
	for (int i = n-1; i >= 0 ; i--)
		insert(&link, arr[i]);
	return link;
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	node* link = arrayToList(arr, n);
	display(link);
	return 0;
}
