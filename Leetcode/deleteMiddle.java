// Leetcode qn: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// code to Delete the Middle Node of a Linked List   

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        ListNode node1 = head;
        ListNode node2 = head;
        int count = 0;
        while(node1!=null){
            count++;
            node1 = node1.next;
        }
        if(count==1){
            return null;
        }
        int mid = count/2;
        System.out.println(mid+" count: "+count);
        while(mid>1){
            node2 = node2.next;
            mid--;
        }
        node2.next = node2.next.next;
        return head;
        
    }
}