public class heapsort {
	
	public void sort(int arr[], int n) {
		for(int i=n/2-1; i>=0; i--) {
			maxHeapify(arr, n, i);
		}
		
		for(int i=n-1; i>0; i--) {
			int temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
			maxHeapify(arr, i, 0);
		}
	}
	
	public void maxHeapify(int arr[], int n, int i) {
		int largest = i;
		int l = 2*i + 1;
		int r = 2*i + 2;
		
		if(l<n && arr[largest] < arr[l]) {
			largest = l;
		}
		
		if(r<n && arr[largest] < arr[r]) {
			largest = r;
		}
		
		if(largest != i) {
			int temp = arr[largest];
			arr[largest] = arr[i];
			arr[i] = temp;
			
			maxHeapify(arr, n, largest);
		}
	}
	
	public static void main(String[] args) {
		int arr[] = { 12, 11, 13, 5, 6, 7};
		
		heapsort obj = new heapsort();
		obj.sort(arr, 6);
		for(int element: arr) {
			System.out.print(element + " ");
		}
	}
	
}
