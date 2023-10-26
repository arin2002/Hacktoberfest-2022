#include<bits/stdc++.h>
using namespace std;
typedef struct trpnode
{
    char key;
    int pri;
    struct trpnode *lc=NULL;
    struct trpnode *rc=NULL;
}*trptr;
void right_rotation(trptr &T,trptr T1)
{
    T->lc=T1->rc;
    T1->rc=T;
    T=T1;
}
void left_rotation(trptr &T,trptr T1)
{
    T->rc=T1->lc;
    T1->lc=T;
    T=T1;
}
void insert(trptr &T,char k,int p)
{
    if(T==NULL)
    {
        T=new(trpnode);
        T->key=k;T->pri=p;
    }
    else if(T->key>k)
    {
        insert(T->lc,k,p);
        if(T->lc->pri<T->pri)
        right_rotation(T,T->lc);
    }
    else if(T->key<k)
    {
        insert(T->rc,k,p);
        if(T->rc->pri<T->pri)
        left_rotation(T,T->rc);
    }
}

void create_treap(trptr &TR)
{
    char a;
    int b;
    cin>>a;
    while(a!='#')
    {
        cin>>b;
        insert(TR,a,b);
        cin>>a;
    }
}
trptr search(trptr TR,char a)
{
    if(!TR) return NULL;
    if(TR->key==a) return TR;
    trptr T1= search(TR->lc,a);
    if(T1) return T1;
    else return search(TR->rc,a);
}
void parent_r(trptr &TR,trptr &temp){
    if(!TR) return;
    if(TR->lc==temp) TR->lc=NULL;
    else if(TR->rc==temp) TR->rc=NULL;
    else parent_r(TR->lc,temp),parent_r(TR->rc,temp);
}
void delete_ele(trptr &TR,trptr &temp)
{
    if(!temp) return;
    if(!temp->lc && !temp->rc){ parent_r(TR,temp); return;}
    else if(!temp->lc) temp=temp->rc;
    else if(!temp->rc) temp=temp->lc;
    else if(temp->lc->pri <temp->rc->pri){
        temp->key=temp->lc->key;
        temp->pri=temp->lc->pri;
        delete_ele(TR,temp->lc);
    }
    else{
        temp->key=temp->rc->key;
        temp->pri=temp->rc->pri;
        delete_ele(TR,temp->rc);
    }
}

void inorder(trptr TR)
{
    if(TR==NULL) return;
    inorder(TR->lc);
    cout<<TR->key<<" "<<TR->pri<<" ";
    inorder(TR->rc);
}
int main()
{
    trptr TR=NULL;
    create_treap(TR);
    
    inorder(TR);
    cout<<"\n";
    
    char a; cin>>a;
     trptr temp=search(TR,a);
    delete_ele(TR,temp);
      cin>>a;
      temp=search(TR,a);
    delete_ele(TR,temp);
    
    inorder(TR);
}