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
//iterator method
node* reverseitr(node *&head){
    node *prev=NULL;
    node *current=head;
    node *nexptr;
    while(current!=NULL){
        nexptr=current->next;
        current->next=prev;
        prev=current;
        current=nexptr;
    }
    return prev;
    
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
    node *newhead=reverseitr(head);
    display(newhead);
     

    return 0;
}