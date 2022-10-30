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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        if(head==NULL) return head;
        if(head-> next == NULL && n==1) {
            head = NULL;
            return head;
        }
        
        int len = 0;
        
        ListNode *temp = head;
        while(temp != NULL){
            
            len++;
            temp  = temp -> next;
        }
        
        int itr = 0;
        len = len - n;
        temp = head;
        
        while(temp != NULL){
            
            if(itr == len){
                
                head = temp -> next;
                delete temp ;
                break;
            }
            
            if(itr == len-1){
                
                ListNode *n = temp -> next;
                temp -> next = n -> next;
                delete n;
                break;
            }
            itr++;
            temp = temp -> next;
            
        }
        
        return head;
    }
};
