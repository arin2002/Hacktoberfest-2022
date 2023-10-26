#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

void storeinorderInSet(Node* root, set<int>& s)
{
	if (!root)
		return;

	storeinorderInSet(root->left, s);
	s.insert(root->data);
	storeinorderInSet(root->right, s);

} 
void setToBST(set<int>& s, Node* root)
{
	if (!root)
		return;
	setToBST(s, root->left);
	auto it = s.begin();
	root->data = *it;
	s.erase(it);
	setToBST(s, root->right);
void binaryTreeToBST(Node* root)
{
	set<int> s;
	storeinorderInSet(root, s);
	setToBST(s, root);

} 
Node* newNode(int data)
{

	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(Node* root)
{
	if (!root)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main()
{
	Node* root = newNode(5);
	root->left = newNode(7);
	root->right = newNode(9);
	root->right->left = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(11);

	binaryTreeToBST(root);
	cout << "Inorder traversal of BST is: " << endl;
	inorder(root);
	return 0;
}
