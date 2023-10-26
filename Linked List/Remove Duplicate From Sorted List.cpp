/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // make a map to check duplicacy of element by frequency check
        map<int,int>m;
        // make new pointer named ptr and point it to head
        ListNode *ptr=head;
        // make new pointer named temp and point it to null 
        ListNode *temp=NULL;
        // traverse linked list 
        while(ptr!=NULL){
            // check that value is alrdy present in map or not
            if(!m[ptr->val])
            {
                m[ptr->val]=1;
                int k=ptr->val;
                temp=ptr;
                ptr=ptr->next;
                if(ptr!=NULL){
                {   temp->next=NULL;
                    while(ptr->val==k)
                    {auto up=ptr;
                    
                        ptr=ptr->next;
                      delete(up);
                        if(ptr==NULL)break;
                    }
                    //m[ptr->val]=1;
                    temp->next=ptr;
                }}
            }
        }
        // return final linked list after removing duplicate from original linked list
        return head;
    }
};
