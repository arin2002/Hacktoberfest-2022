#include<bits/stdc++.h>
using namespace std;
typedef struct ternode
{
    char key;
    int flag=0;
    struct ternode *lc=NULL;
    struct ternode *mc=NULL;
    struct ternode *rc=NULL;
}*terptr;
void print(terptr &T)
{
    if(T==NULL) return;
    print(T->lc);
    cout<<T->key<<" ";
    print(T->mc);
    print(T->rc);
}
void insert(terptr &T,string &s,int ind){
    if(T==NULL){
        T=new(ternode);
        T->key=s[ind++];
        if(ind == (int)s.size()) {T->flag=1;return;}
        insert(T->mc,s,ind);
    }
    else{
        if(T->key==s[ind]){
            ind++;
            if(ind == (int)s.size()) {T->flag=1;return;}
             insert(T->mc,s,ind);
        }
        else if(T->key> s[ind]) insert(T->lc,s,ind);
        else insert(T->rc,s,ind);
    }
}
bool check(terptr &T,string &s,int ind){
    if(!T) return 0;
    if(T->key> s[ind]) return check(T->lc,s,ind);
    else if(T->key<s[ind]) return check(T->rc,s,ind);
    else{
        ind++;
        if(ind == (int)s.size()) return T->flag;
        else return check(T->mc,s,ind);
    }
}
int main()
{
    terptr T=NULL;
    string str;
    int i,j,n,m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str; j=0;
        insert(T,str,j);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>str;
        cout<<check(T,str,0)<<" ";
    }
  return 0;
}