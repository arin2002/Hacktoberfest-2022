package heap;

public class MaxHeap {
	private int Heap[];
	private int maxsize;
	private int size;
	
	private static int FRONT = 1;
	
	public MaxHeap(int maxsize) {
		this.maxsize = maxsize;
		this.size = 0;
		Heap = new int [maxsize+1];
		Heap[0] = Integer.MAX_VALUE;
	}
	
	private int parent(int pos) {
		return pos/2;
	}
	
	private int leftChild(int pos) {
		return 2*pos;
	}
	
	private int rightChild(int pos) {
		return (2*pos) + 1;
	}
	
	private void swap(int a, int b) {
		int temp = Heap[a];
		Heap[a] = Heap[b];
		Heap[b] = temp;
	}
	
	private boolean isLeaf(int pos) {
		if(pos > (size/2) && pos <= size) {
			return true;
		}
		return false;
	}
	
	public void insert(int element) {
		
		if(size >= maxsize) {
			System.out.println("maxsize is reached");
			return;
		}
		
		Heap[++size] = element;
		int current = size;
		
		while(Heap[current] > Heap[parent(current)]) {
			swap(current, parent(current));
			current = parent(current);
		}
	}
	
	private void maxHeapify(int pos) {
		if(!isLeaf(pos)) {
			if(Heap[pos] < Heap[leftChild(pos)] || 
			   Heap[pos] < Heap[rightChild(pos)]) {
				if(Heap[leftChild(pos)] > Heap[rightChild(pos)]) {
					swap(pos, leftChild(pos));
					maxHeapify(leftChild(pos));
				} else {
					swap(pos, rightChild(pos));
					maxHeapify(rightChild(pos));
				}
			}
		}
	}
	
	public void print() {
		for(int i = 1; i <= size/2; i++) { 
        	
        	if(2*i + 1 > size) {
        		System.out.print(" PARENT : " + Heap[i]
                        + " LEFT CHILD : " + Heap[2 * i] 
                        + " RIGHT CHILD : null");
        	} else {
        		System.out.print(" PARENT : " + Heap[i]
                        + " LEFT CHILD : " + Heap[2 * i] 
                        + " RIGHT CHILD :" + Heap[2 * i + 1]);
        	}
        	 
            System.out.println(); 
        }
	}
	
	public int remove() {
		int popped = Heap[FRONT];
		Heap[FRONT] = Heap[size--];
		maxHeapify(FRONT);
		return popped;
	}
}
