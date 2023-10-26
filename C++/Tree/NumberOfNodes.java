
import java.util.*;


 class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }

public class NumberOfNodes{
	static int countNodes(TreeNode root) {
        if(root==null)
            return 0;
        int left=0;
        TreeNode l=root;
        while(l!=null){
            left++;
            l=l.left;
        }
        int right=0;
        TreeNode r=root;
        while(r!=null){
            right++;
            r=r.right;
        }
        if(left==right)
            return (int)(Math.pow(2,left)-1);
        return 1+countNodes(root.left)+countNodes(root.right);
    }
	public static void main(String[] args) {
		TreeNode node= new TreeNode(1);
		node.left=new TreeNode(2);
		node.right=new TreeNode(3);
		node.left.left=new TreeNode(4);
		node.left.right=new TreeNode(5);
		node.right.left=new TreeNode(6);
		System.out.println(countNodes(node));
	}
}

//Problem link: https://leetcode.com/problems/count-complete-tree-nodes/
