class Solution {
public:
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
       int a=1,y=0;
        
        ListNode* curr = head;
        ListNode* prev= NULL;
        ListNode* nxt = NULL;
        ListNode* pr= NULL;
        while(curr!=NULL && a<k){
            pr = curr;
            curr = curr -> next;
            a++;
            if(curr==NULL && a<=k){
                curr = head;
                y=1;
                break;
            }
        }
        
        curr = head;
         a=0;
        if(y==0){
            while(curr!=NULL && a<k){
                nxt = curr -> next;
                curr -> next= prev;
                prev= curr;
                curr = nxt;
                
                a++;
            }
            
            if(nxt!=NULL){
                head -> next = reverseKGroup(nxt,k);
            }
            
        }
        
        else{
            prev = curr;
        }
        
        return  prev;
    }
};
