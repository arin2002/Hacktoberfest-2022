#include <iostream>
using namespace std;
struct node{
    int age;
    node *left, *right, *t;
    int color;
};
node *root =NULL;
node* insertion(node *entry, node *child){
    if(entry == NULL){
        return child;
    }
    if(child->age < entry->age){
        entry->left = insertion(entry->left, child);
        entry->left->t = entry;
    }
    else{
        entry->right = insertion(entry->right, child);
        entry->right->t = entry;
    }
    return entry;
}

void rrt(node *data){
    struct node *l = data->left;
    data->left = l->right;
    if(data->left)
        data->left->t=data;
    l->t=data->t;
    if(!data->t)
        root = data;
    else if(data == data->t->left)
        data->t->left=l;
    else
        data->t->right=l;
    l->right=data;
    data->t=l;
}

void lrt(node* data)
{
    struct node* r = data->right;
    data->right = r->left;
    if (data->right)
        data->right->t = data;
    r->t = data->t;
    if (!data->t)
        root = r;
    else if (data == data->t->left)
        data->t->left = r;
    else
        data->t->right = r;
    r->left = data;
    data->t = r;
}

void coloring(node *root, node *point){
struct node* parent = NULL;
    struct node* g_parent = NULL;
 
    while ((point != root) && (point->color != 0)
           && (point->t->color == 1))
    {
        parent = point->t;
        g_parent = point->t->t;
 
        if (parent == g_parent->left)
        {
            struct node* uncle = g_parent->right;
            if (uncle != NULL && uncle->color == 1)
            {
                g_parent->color = 1;
                parent->color = 0;
                uncle->color = 0;
                point = g_parent;
            }
            else {
                if (point == parent->right) {
                    lrt(parent);
                    point = parent;
                    parent = point->t;
                }
                rrt(g_parent);
                int x = parent->color;
                parent->color = g_parent->color;
                g_parent->color = x;
                point = parent;
            }
        }
 
        else {
            struct node* uncle = g_parent->left;
            if ((uncle != NULL) && (uncle->color == 1))
            {
                g_parent->color = 1;
                parent->color = 0;
                uncle->color = 0;
                point = g_parent;
            }
            else {
                if (point == parent->left) {
                    rrt(parent);
                    point = parent;
                    parent = point->t;
                } 
                lrt(g_parent);
                int x = parent->color;
                parent->color = g_parent->color;
                g_parent->color = x;
                point = parent;
            }
        }
    }
    root->color = 0;
}

node *searching(node *parent, int data){
    if(parent == NULL){
        cout<<"NO SUCH ENTRY"<<endl;
        return NULL;
    }
    if(parent->age == data){
        cout<<"DATA FOUND"<<endl;
        return parent;
    }
    if(parent->age > data){
        return searching(parent->left, data);
    }
    return searching(parent->right, data);
}

void inorderTrav(node *parent){
    if(parent == NULL){
        return;
    }
    inorderTrav(parent->left);
    cout<<parent->age<<" ";
    inorderTrav(parent->right);
}

int main() {
    int age;
    while (true) {
        cout << "1 --> Insert record"<< endl;
        cout << "2 --> Search record"<< endl;
        cout << "3 --> Exit"<< endl;
        cout << "Enter your choice:"<<endl;

        int num;
        cin >> num;
        if (num == 1) {
            int n;
            cout << "Enter Age:"<<endl;
            cin >> n;
            struct node* temp = (struct node*)malloc(sizeof(struct node));
            temp->right = NULL;
            temp->left = NULL;
            temp->t = NULL;
            temp->age = n;
            temp->color = 1;
            root = insertion(root, temp);
            coloring(root,temp);
            cout<<"Current Data: ";
            inorderTrav(root);
        }
        else if (num == 2) {
            cout << "Enter Age:"<<endl;
            cin >> age;
            node *data=searching(root, age);
            if(data!=NULL){ 
                cout<<data->age<<endl;
            }
        }
        else if (num == 3) {
            exit(0);
        }
        else {
            cout << "Invalid Input"<<endl;
        }
        cout<<endl;
    }
    return 0;
}