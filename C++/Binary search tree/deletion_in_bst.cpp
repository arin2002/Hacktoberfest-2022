/*------------------------------- template start--------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int count = 0;
#define ll long long int
#define pb push_back
#define mp make_pair

void show(int a[], int arraysize)
{
    for (ll i = 0; i < arraysize; ++i)
        cout << a[i];
}
void roundby2(double &ans)
{
    ans *= 100;
    ans += 0.5;
    ans = (int)ans;
    ans /= 100;
}

ll gcd(ll a, ll b)
{
    while (true)
    {
        if (a == 0)
            return b;
        b %= a;
        if (b == 0)
            return a;
        a %= b;
    }
}

ll lcm(ll a, ll b)
{
    ll temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

ll hcf(ll n1, ll n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
//important constants
#define MOD 1000000007
#define INF 1LL << 57LL
#define MAX 1000000
#define pi 3.14159265358979
#define ESP (1e-9)

//implementation of tree

struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inordertraversal(struct node *root)
{
    if (root != NULL)
    {
        inordertraversal(root->left);
        printf("%d ", root->key);
        inordertraversal(root->right);
    }
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
/*---------------------------------Template End---------------------------------*/
/*---------------------------------- Code Here---------------------------------*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        struct node *root = NULL;
        root = insert(root, 60);
        root = insert(root, 32);
        root = insert(root, 10);
        root = insert(root, 33);
        root = insert(root, 75);
        root = insert(root, 21);
        root = insert(root, 88);
        printf("Inorder traversal of the given tree \n");
        inordertraversal(root);
        printf("\nDelete 20\n");
        root = deleteNode(root, 21);
        printf("Inorder traversal  \n");
        inordertraversal(root);
        printf("\nDelete 30\n");
        root = deleteNode(root, 32);
        printf("Inorder traversal  \n");
        inordertraversal(root);
        printf("\nDelete 50\n");
        root = deleteNode(root, 60);
        printf("Inorder traversal \n");
        inordertraversal(root);
    }
    return 0;
}
/*------------------------------- code End ----------------------------------*/