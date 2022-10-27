#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};


void insertAtHead(Node* &tail, Node* &head, int d) {


    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}

int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
// O(n) TC
Node* getM(Node*head){
    int len=getLength(head);
    int ans=(len/2);
    Node*temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

Node *getMiddle(Node*head){

    if(!head||!(head->next)||!(head->next->next)){
        return head;
    }
    Node*slow=head;
    Node*fast=head->next;
    while(fast){
        fast=fast->next;
        if(fast) fast=fast->next;
        slow=slow->next;
    }
    return slow;
    }

void pprint(Node *head){
    cout<<head->data;
}

void print(Node* head) {
    Node* temp  = head ;

    while(temp) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}


int main(){


    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(tail,head, 11);
    insertAtHead(tail,head, 12);
    insertAtHead(tail,head, 15);
    insertAtHead(tail,head, 13);
    insertAtHead(tail,head, 14);
    insertAtHead(tail,head, 15);
    insertAtHead(tail,head, 16);
    print(head);
    Node*ans=getMiddle(head);
    pprint(ans);


return 0;
}