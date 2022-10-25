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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) //IF HEAD POINTING TO NULL OR ONLY 1 NODE PRESENT
        return head;
        ListNode* od=head;
        
        ListNode* ed=head->next, *j=head->next;
        while(ed && ed->next)
        {
            od->next=od->next->next;
             od=od->next;
           
            ed->next=ed->next->next;
             ed=ed->next;
          
        }
      
       od->next=j;
        return head;
    }
};
