#include<bits/stdc++.h>
using namespace std;

struct bstnode{
    int data;
    struct bstnode *left=NULL;
    struct bstnode *right=NULL;
};

void insert(struct bstnode *&T,int key){
   if(T==NULL){
       T=new (bstnode);
       T->data=key;
   }
   else if(T->data< key) insert(T->right,key);
   else insert(T->left,key);
}
void preorder(struct bstnode *T){
    if(!T) return;
    cout<<T->data<<" ";
    preorder(T->left);
    preorder(T->right);
}
void create_a_bst(struct bstnode *&T){
    int n; cin>>n;
    while(n!=-1){
        insert(T,n); cin>>n;
    }
}
struct bstnode *left_rotation(struct bstnode *T){
    struct bstnode *rc= T->right;
    T->right=rc->left;
    rc->left=T;
    return rc;
}
struct bstnode *right_rotation(struct bstnode *T){
    struct bstnode *lc= T->left;
    T->left=lc->right;
    lc->right=T;
    return lc;
}
struct bstnode *splay_tree(struct bstnode *T,int k){
    if(T->data==k) return T;
    else if(T->data < k){
        T->right=splay_tree(T->right,k);
        return left_rotation(T);
    }
    else if(T->data > k){
        T->left=splay_tree(T->left,k);
        return right_rotation(T);
    }
    return T;
}
bool chk_ele(struct bstnode*T,int x){
    if(!T) return  0;
    if(T->data ==x) return 1;
    if(T->data<x) return chk_ele(T->right,x);
    return chk_ele(T->left,x);
}
int main()
{
   struct bstnode *T=NULL;
   create_a_bst(T);
   preorder(T);
   int k; cin>>k;
   if(!chk_ele(T,k)){ cout<<"element not present\n";return 0;}
   T=splay_tree(T,k);
   preorder(T);
    return 0;
}