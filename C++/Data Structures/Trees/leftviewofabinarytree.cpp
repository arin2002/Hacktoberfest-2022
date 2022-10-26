
#include <bits/stdc++.h>
using namespace std;
struct node {
	int data;
	struct node *left, *right;
};
struct node* newNode(int item)
{
	struct node* temp = new node;
	temp->data = item;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void leftView(struct node* root, queue<node*>& q)
{
	if (root == NULL)
		return;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* temp = q.front();

		if (temp) {
			cout << temp->data << " ";
			while (q.front() != NULL) {
				if (temp->left)
					q.push(temp->left);
				if (temp->right)
					q.push(temp->right);
				q.pop();

				temp = q.front();
			}
			q.push(NULL);
		}
		q.pop();
	}
}
void leftView1(struct node* root)
{
	queue<node*> q;

	leftView(root, q);
}
int main()
{
	struct node* root = newNode(10);
	root->left = newNode(112);
	root->right = newNode(31);
	root->left->right = newNode(42);
	root->right->left = newNode(15);
	root->right->left->right = newNode(61);
	root->right->left->right->left = newNode(118);
	root->right->left->right->right = newNode(71);

	leftView1(root);

	return 0;
}
