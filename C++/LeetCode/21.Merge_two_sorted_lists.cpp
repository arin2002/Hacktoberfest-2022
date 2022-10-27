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

/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Solution:
Initially finding the size of the lists, then merging two lists by comparing each element in a while loop. If there is difference in sizes, then the remaining elements are added to the final list. 
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        int m=0, n=0;
        int temp=0;
        ListNode* curr;
        ListNode* curr1;
        ListNode* res = new ListNode();
        curr1 = l1;
        while(curr1!=nullptr) // size of l1 - m
        {
            m++;
            curr1 = curr1->next;
        }
        curr1 = l2;
        while(curr1!=nullptr) //size of l2 - n
        {
            n++;
            curr1 = curr1->next;
        }
        curr = res;
        while(l2!=nullptr && l1!=nullptr && temp<=m+n) //adding the two list into a sorted list
        {
            if(l1->val<=l2->val)
            {
                curr->next = l1;
                curr = curr->next;
                l1 = l1->next;
                    
            }
            else
            {
                curr->next = l2;
                curr = curr->next;
                l2 = l2->next;
                
            }
            temp++;
        }
        while(l1!=nullptr) //adding remaining elements from l1 
        {
            curr->next = l1;
            curr = curr->next;
            l1 = l1->next;
        }
        while(l2!=nullptr) //adding remaining elements from l2
        {
            curr->next = l2;
            curr = curr->next;
            l2 = l2->next;
        }
        return res->next;
    }
};