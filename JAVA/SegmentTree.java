package segmentTree;

import java.util.*;

public class SegmentTree {

	static int tree[];
	static int arr[];
	
	public static int constructST(int l, int r, int cur) {
		if(l == r) {
			tree[cur] = arr[l];
			return arr[l];
		}
		int mid = (l+r)/2;
		
		tree[cur] = constructST(l, mid, 2*cur+1) + 
				  constructST(mid+1, r, 2*cur+2);
		
		return tree[cur];
	}
	
	public static void updateQuery(int ss, int se, int i, int si, int diff) {
		if(i<ss || i>se) return;
		
		tree[si] = tree[si] + diff;
		
		if(se > ss) {
			int mid = (ss + se)/2;
			updateQuery(ss, mid, i, 2*si+1, diff);
			updateQuery(mid+1, se, i, 2*si+2, diff);
		}
	}
	
	public static int getSumQuery(int qs, int qe, int ss, int se, int si) {
		if(qs > se || qe < ss) return 0;
		
		if(qs <= ss && qe >= se) return tree[si];
		
		int mid = (ss + se)/2;
		
		return getSumQuery(qs, qe, ss, mid, 2*si + 1) + 
			   getSumQuery(qs, qe, mid+1, se, 2*si + 2);
	}

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no of elements");
		int n = sc.nextInt();
		arr = new int [n];
		System.out.println("Enter array Elements");
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}

		int x = (int) (Math.ceil(Math.log(n) / Math.log(2))); 
		  
        int size = 2 * (int) Math.pow(2, x) - 1;
		tree = new int [size];
		
		constructST(0, n-1, 0);
//		for(int i=0; i<size; i++) {
//			if(tree[i] == 0) {
//				System.out.print("DUMMY ");
//				continue;
//			}
//			System.out.print(tree[i] + " ");
//		}
		System.out.println(getSumQuery(1, 4, 0, n-1, 0));
		updateQuery(0, n-1, 5, 0, 5);
		System.out.println(getSumQuery(2, 5, 0, n-1, 0));
		updateQuery(0, n-1, 1, 0, -5);
		System.out.println(getSumQuery(0, 3, 0, n-1, 0));
		
		sc.close();
	}

}
