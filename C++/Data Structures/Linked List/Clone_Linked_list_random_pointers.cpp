class Solution {
public:
    //Step 1
    void copyList(Node* head){
        //making the copy
        Node* temp=head;
        Node* curr=head->next;
        while(temp){ 
            Node* copy=new Node(temp->val);
            temp->next=copy;
            copy->next=curr;
            temp=curr;
            if(curr!=NULL)
            curr=curr->next;
        }
    }
    void handleRandom(Node* head){
        Node* temp=head;
        while(temp){
            if(temp->random)
            temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
    }
    Node* detachList(Node* head){
        Node* dummy=new Node(-1);
        Node* tail=dummy;
        Node* temp=head;
        while(temp){
            tail->next=temp->next;
            tail=tail->next;
            temp->next=tail->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        //Step 1 =>Copying the List,next pointer is assigned in this step
        copyList(head);
        //Step 2=>Handling the random pointer 
        handleRandom(head);
        //Detaching the original list from the clone list and return the cloned list
       return detachList(head);
    }
};