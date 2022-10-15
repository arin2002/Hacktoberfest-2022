/* Program to check whether a given linked list is a palindrome or not.
 Example: 3->4->4->3 is a palindrome

 Approach used: Double traversal of linked list with stack */

 #include<bits/stdc++.h>
 using namespace std;

 struct node{
    int val;
    struct node *next;
    node(int val){
        this->val=val;
        next=NULL;
    }
 };


bool palindrome(node *head){
    stack<int> stk;
    if(head==NULL)
        return true;
    node *temp=head;
    while(temp->next){
        stk.push(temp->val);
        temp=temp->next;  
    }
     while (head != NULL) {
        int value = stk.top();
        stk.pop();
        if (head->val!=value) {
            return false;
        }
        head = head->next;
    }
    return true;
    
}

 int main(){
    
    node *head=new node(3);
    head->next=new node(4);
    head->next->next=new node(3);
    head->next->next->next=new node(3);
    

   

    bool isPalindrome=palindrome(head);
    if(isPalindrome)
        cout<<"Linked list is a palindrome";
    else
        cout<<"Linked list is not a palindrome";

    return 0;
 }