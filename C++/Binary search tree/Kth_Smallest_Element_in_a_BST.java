// https://leetcode.com/problems/kth-smallest-element-in-a-bst/


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    int target = -1;
    int count;
    
    public int kthSmallest(TreeNode root, int k) {
        
        count = k;
        inOrderTraversal(root);
        return target;
        
    }
    
    private void inOrderTraversal(TreeNode node) {
        
        if(node == null)
            return;
        
        //Traversing left child node
        inOrderTraversal(node.left);
        
        //Visit the current node, and assign target if it reaches the kth
        if(--count == 0) {
            target = node.val;
            return;
        }
        
        //Traversing right child node
        inOrderTraversal(node.right);
    
    }
    
}