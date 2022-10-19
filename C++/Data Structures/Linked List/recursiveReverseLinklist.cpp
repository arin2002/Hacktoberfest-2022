#include<bits/stdc++.h>
using namespace std;

//Node 
class node{
    public:
    int data;
    node *next ;
    node(int val){
        data=val;
        next=NULL;
    }
};

//Function to insert Elements in linklist
void insertlist(int val,node* &head){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}

//recursive

node *reverseRec(node *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *newhead=reverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
//To display values of linklist
void display(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

//Driver code
int main(){
    node*head=NULL;
    for(int i=1;i<10;i++){
        insertlist(i,head);
    }
     head=reverseRec(head);
    display(head);

    return 0;
}