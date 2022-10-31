
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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode * curr= head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int end= count-k +1;
        if(end< k){
            int x= k;
            k=end;
            end=x;
        }
        if(end==k){
            return head;
        }
        curr= head;
        int i=1;
        ListNode *prev=head;
        ListNode * prev2=head;
        while(i<=end){
            if(i==k){
                prev=curr;
            }
            if(i==end){
                prev2=curr;
            }
            i++;
            curr= curr->next;
        }
        int x= prev->val;
        prev->val= prev2->val;
        prev2->val= x;
        
        return head;
        
        
    }
};