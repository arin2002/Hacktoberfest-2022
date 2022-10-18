
//Flyod's Cycyle detection method
// by slow and fast method
// 2nd ) detect staring node of cycle
//3rd to remove loop or cycle in linkedlist
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};
void inserAtHead(Node* &head,int d){
    Node *temp=new Node(d);
    
    temp->next=head;
    head=temp;


}

void print(Node* &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


Node * flyoddetect(Node *&head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node * fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Cycle is present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;

}
 
Node * getStartingCyleNOde(Node * &head){
    if(head==NULL){
        return NULL;
    }
    Node * intersection=(flyoddetect(head));
    Node * slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void RemoveLoop(Node * &head){
    if(head==NULL){
        return ;
    }
    Node * startLoop=getStartingCyleNOde(head);
    Node * temp=startLoop;
    while(temp->next!=startLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}



int main()
{
    Node *node1 = new Node(14);
    cout << node1->data << endl;
    cout << node1->next << endl; // it will print 0  as address;
    Node *head=node1;
    Node *tail=node1;
   

      print(head);
   
    inserAtHead(head,32);
      print(head);
   
    inserAtHead(head,356);
      print(head);
   
    inserAtHead(head,56);
      print(head);
      tail->next=head;
      if(flyoddetect(head)!=NULL){
          cout<<"CYCYLE is present"<<endl;
      }
      else{
          cout<<"CYCYLE is not present"<<endl;
      }
   Node * loop =getStartingCyleNOde(head);
   cout<<"loop starts at the "<<loop->data<<endl;
   RemoveLoop(head);
   print(head);
return 0;
}
