#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

class Solution
{
    public:
    Node* reverseList(Node* head){
        Node* previous = NULL;
        Node* current = head;
        Node* next;

        while (current!=NULL){
            next = current->next;

            current->next = previous;

            previous = current;
            current = next;
        }
        return previous;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* p = first;
        Node* q = second;
        Node* cari = new Node(0);
        int m=0, n=0;
        while (p!=NULL){
            p = p->next;
            m++;
        }
        while(q!=NULL){
            q = q->next;
            n++;
        }

        first = reverseList(first);
        second = reverseList(second);
        if (m>=n){
            p = first;
            q = second;
        }
        else{
            p = second;
            q = first;
        }
        Node* temp = p; // To store the head    
        cari->next = p->next; // Carry is always one ahead of the previous node
        int carry = 0;

        while (p!=NULL){
            p->data += carry;
            carry = 0;
            if (q!=NULL){
                p->data += q->data;
                q = q->next;
            }
            if (p->data > 9){
                p->data %= 10;
                carry = 1;
                if (p->next == NULL){
                    cari->data = 1;
                    p->next = cari;
                    cari->next = NULL;
                    break;
                }
            }
            p = p->next;
        }
        temp = reverseList(temp);
        return temp;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}