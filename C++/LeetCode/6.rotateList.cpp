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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode * temp= head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count++;
        k= k%count;
        k = count - k;
        ListNode * curr= head;
        int i=1;
        while(i<k){
            curr= curr->next;
            i++;
        }
        temp->next= head;
        head= curr->next;
        
        curr->next= NULL;
        return head;
        
        
    }
};