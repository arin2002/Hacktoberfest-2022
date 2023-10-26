#include <iostream>
using namespace std;
struct Node
{
   string name;
   int age;
   char gender;
   string dept;
  Node *left, *right;
  bool r_flag, l_flag;
  Node(string entry, int a, char g, string d){
      name = entry;
      age = a;
      gender = g;
      dept = d;
      left = NULL;
      right = NULL;
   }
};

struct Node *insert(struct Node *root, string entry, int age, int gender, string dept)
{
  Node *p = root;
  Node *par = NULL; 
  while (p != NULL)
  {
    if (entry == (p->name))
    {
      printf("!! Entry already exists !!");
      return root;
    }

    par = p; 

    if (entry < p->name)
    {
      if (p->l_flag == false)
        p = p->left;
      else
        break;
    }

    else
    {
      if (p->r_flag == false)
        p = p->right;
      else
        break;
    }
  }

  Node *t = new Node(entry, age, gender, dept);
  t->name = entry;
  t->l_flag = true;
  t->r_flag = true;

  if (par == NULL)
  {
    root = t;
    t->left = NULL;
    t->right = NULL;
  }
  else if (entry < (par->name))
  {
    t->left = par->left;
    t->right = par;
    par->l_flag = false;
    par->left = t;
  }
  else
  {
    t->left = par;
    t->right = par->right;
    par->r_flag = false;
    par->right = t;
  }
  return root;
}

struct Node *inorderSucc(struct Node *p)
{

  if (p->r_flag == true)
    return p->right;

  p = p->right;
  while (p->l_flag == false)
    p = p->left;
  return p;
}

struct Node *inorderPredecc(Node *root)
{
    if (root->l_flag == true)
        return root->left;

    root = root->left;
    while (root->r_flag == false)
        root = root->right;
    return root;
}

bool search(struct Node *root, string name){
  if (root == NULL)
      cout<<"!! No Data Available !!"<<endl;

    struct Node *p = root;
    while (p->l_flag == false)
      p = p->left;

    while (p != NULL)
    {
      if(p->name == name)
        return 1;
      p = inorderSucc(p);
    }
    return false;
}

void inorder(struct Node *root)
{
  if (root == NULL)
    cout<<"!! No Data Available !!"<<endl;

  struct Node *p = root;
  while (p->l_flag == false)
    p = p->left;

  while (p != NULL)
  {
    cout<<p->name<<" "<<p->age<<" "<<p->gender<<" "<<p->dept<<" "<<endl;
    p = inorderSucc(p);
  }
}

struct Node *leaf(struct Node *root, struct Node *t2, struct Node *t1)
{

    if (t2 == NULL)
        root = NULL;

    else if (t1 == t2->left)
    {
        t2->l_flag = true;
        t2->left = t1->left;
    }
    else
    {
        t2->r_flag = true;
        t2->right = t1->right;
    }

    free(t1);
    return root;
}

struct Node *leaf_one(struct Node *root, struct Node *t2, struct Node *t1)
{
    struct Node *l;

    if (t1->l_flag == false)
        l = t1->left;

    else
        l = t1->right;

    if (t2 == NULL)
        root = l;

    else if (t1 == t2->left)
        t2->left = l;
    else
        t2->right = l;

    Node *succ = inorderSucc(t1);
    Node *pre = inorderPredecc(t1);

    if (t1->l_flag == false)
        pre->right = succ;

    else
    {
        if (t1->r_flag == false)
            succ->left = pre;
    }

    free(t1);
    return root;
}

struct Node *leaf_two(struct Node *root, struct Node *t2, struct Node *t1)
{
    struct Node *t2succ = t1;
    struct Node *succ = t1->right;

    while (succ->left != NULL)
    {
        t2succ = succ;
        succ = succ->left;
    }

    t1->name = succ->name;

    if (succ->l_flag == true && succ->r_flag == true)
        root = leaf(root, t2succ, succ);
    else
        root = leaf_one(root, t2succ, succ);

    return root;
}

struct Node *deletion(struct Node *root, string name)
{
    struct Node *t2 = NULL, *t1 = root;

    int found = 0;

    while (t1 != NULL)
    {
        if (name == t1->name)
        {
            found = 1;
            break;
        }
        t2 = t1;
        if (name < t1->name)
        {
            if (t1->l_flag == false)
                t1 = t1->left;
            else
                break;
        }
        else
        {
            if (t1->r_flag == false)
                t1 = t1->right;
            else
                break;
        }
    }

    if (found == 0)
    {
        cout << "!! No such entries !!"<<endl;
    }
    else if (t1->l_flag == false && t1->r_flag == false)
    {
        root = leaf_two(root, t2, t1);
    }

    else if (t1->l_flag == false)
    {
        root = leaf_one(root, t2, t1);
    }

    else if (t1->r_flag == false)
    {
        root = leaf_one(root, t2, t1);
    }
    else
    {
        root = leaf(root, t2, t1);
    }

    return root;
}

int main()
{
  struct Node *root = NULL;
  string name, dept;
  int age;
  char gender;

  while (true) {
        cout << "1 --> Insert record"<< endl;
        cout << "2 --> Delete record"<< endl;
        cout << "3 --> Search record"<< endl;
        cout << "4 --> In-order traversal"<< endl;
        cout << "5 --> Exit"<< endl;
        cout << "Enter your choice:"<<endl;

        int x;
        cin >> x;
        if (x == 1) {
            cout << "Enter Name"<<endl;
            cin >> name;
            cout << "Enter Age"<<endl;
            cin >> age;
            cout << "Enter Gender"<<endl;
            cin >> gender;
            cout << "Enter Department"<<endl;
            cin >> dept;
            root = insert(root, name, age, gender, dept);
            inorder(root);
        }
        else if (x == 2) {
            cout << "Enter Name: : "<<endl;
            cin >> name;
            root = deletion(root, name);
            cout<<"Available Data:"<<endl;
            inorder(root);
        }
        else if (x == 3) {
            cout << "Enter Name"<<endl;
            cin >> name;
            cout<< search(root, name)<<endl;
        }
        else if (x == 4) {
            inorder(root);
        }
        else if (x == 5) {
            exit(0);
        }
        else {
            cout << "!! Enter valid choice !!"<<endl;
        }
        cout<<endl;
    }
    return 0;

  return 0;
}
