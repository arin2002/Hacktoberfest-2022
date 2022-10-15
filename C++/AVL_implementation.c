

/*
Question - Write a C program to implement AVL Tree.


*/
//rishi gupta

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left_child;
	struct node *right_child;
	int height;
};

int height(struct node *temp)
{
	if (temp == NULL)
		return 0;
	return temp->height;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

struct node *newnode(int data)
{
	struct node *temp = (struct node *)
		malloc(sizeof(struct node));
	temp->data = data;
	temp->left_child = NULL;
	temp->right_child = NULL;
	temp->height = 1;
	return temp;
}

struct node *rightRotate(struct node *node1)
{
	struct node *node2 = node1->left_child;
	struct node *temp = node2->right_child;
	node2->right_child = node1;
	node1->left_child = temp;
	node1->height = max(height(node1->left_child), height(node1->right_child)) + 1;
	node2->height = max(height(node2->left_child), height(node2->right_child)) + 1;
	return node2;
}

struct node *leftRotate(struct node *node1)
{
	struct node *node2 = node1->right_child;
	struct node *temp = node2->left_child;
	node2->left_child = node1;
	node1->right_child = temp;
	node1->height = max(height(node1->left_child), height(node1->right_child)) + 1;
	node2->height = max(height(node2->left_child), height(node2->right_child)) + 1;
	return node2;
}

int getBalance(struct node *temp)
{
	if (temp == NULL)
		return 0;
	return height(temp->left_child) - height(temp->right_child);
}

struct node *insert_node(struct node *node, int data)
{
	if (node == NULL)
		return (newnode(data));

	if (data < node->data)
		node->left_child = insert_node(node->left_child, data);
	else if (data > node->data)
		node->right_child = insert_node(node->right_child, data);
	else
		return node;

	node->height = 1 + max(height(node->left_child), height(node->right_child));

	int balanceFactor = getBalance(node);

	// Right Rotate in Left Left Case
	if (balanceFactor > 1 && data < node->left_child->data)
		return rightRotate(node);

	// Left Rotate in Right Right Case
	if (balanceFactor < -1 && data > node->right_child->data)
		return leftRotate(node);

	// Left Right Rotate in Left Right Case
	if (balanceFactor > 1 && data > node->left_child->data)
	{
		node->left_child = leftRotate(node->left_child);
		return rightRotate(node);
	}

	// Right Left Rotate in Right Left Case
	if (balanceFactor < -1 && data < node->right_child->data)
	{
		node->right_child = rightRotate(node->right_child);
		return leftRotate(node);
	}

	return node;
}

struct node *minValueNode(struct node *node)
{
	struct node *current = node;

	while (current->left_child != NULL)
		current = current->left_child;

	return current;
}

struct node *delete_node(struct node *root, int data)
{
	if (root == NULL)
		return root;

	if (data < root->data)
		root->left_child = delete_node(root->left_child, data);
	else if (data > root->data)
		root->right_child = delete_node(root->right_child, data);
	else
	{
		if ((root->left_child == NULL) || (root->right_child == NULL))
		{
			struct node *temp = root->left_child ? root->left_child : root->right_child;

			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else
				*root = *temp;

			free(temp);
		}
		else
		{
			struct node *temp = minValueNode(root->right_child);
			root->data = temp->data;
			root->right_child = delete_node(root->right_child, temp->data);
		}
	}

	if (root == NULL)
		return root;

	root->height = 1 + max(height(root->left_child), height(root->right_child));
	int balanceFactor = getBalance(root);

	// Right Rotate in Left Left Case
	if (balanceFactor > 1 && getBalance(root->left_child) >= 0)
		return rightRotate(root);

	// Left Right Rotate in Left Right Case
	if (balanceFactor > 1 && getBalance(root->left_child) < 0)
	{
		root->left_child = leftRotate(root->left_child);
		return rightRotate(root);
	}

	// Left Rotate in Right Right Case
	if (balanceFactor < -1 && getBalance(root->right_child) <= 0)
		return leftRotate(root);

	// Right Left Rotate in Right Left Case
	if (balanceFactor < -1 && getBalance(root->right_child) > 0)
	{
		root->right_child = rightRotate(root->right_child);
		return leftRotate(root);
	}

	return root;
}

void preOrderTraversal(struct node *temp)
{
	if (temp != NULL)
	{
		printf("%d ", temp->data);
		preOrderTraversal(temp->left_child);
		preOrderTraversal(temp->right_child);
	}
}

int main()
{
	struct node *root_node = NULL;

	root_node = insert_node(root_node, 1);
	root_node = insert_node(root_node, 2);
	root_node = insert_node(root_node, 3);
	root_node = insert_node(root_node, 5);
	root_node = insert_node(root_node, 6);
	root_node = insert_node(root_node, 4);

	printf("Preorder traversal of the AVL tree is : ");
	preOrderTraversal(root_node);

	root_node = delete_node(root_node, 3);

	printf("\nPreorder traversal after deletion of 10 : ");
	preOrderTraversal(root_node);

	return 0;
}

