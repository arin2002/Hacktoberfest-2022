// Min-Max Heaps are  a data structure  which supports Insertion, deleting-minima  
// and deleting maxima in O(log n) time.It also supports FindMin and FindMax in O(1) time. ++

#include <iostream>
#include <cmath>
using namespace std;

void heapify(int l[], int n, int i)
{
    int lev = log2(i+1);
    int lc = 2*i+1;
    int rc = 2*i+2;
    int rrgc = 4*i+6;
    int rlgc = 4*i+5;
    int lrgc = 4*i+4;
    int llgc = 4*i+3;
    int largest = i;
    int smallest = i;
    
    if(lev%2 == 0){
        if(lc < n && l[lc]<l[smallest]) smallest = lc;
        if(rc < n && l[rc]<l[smallest]) smallest = rc;
        if(llgc < n && l[llgc]<l[smallest]) smallest = llgc;
        if(rlgc < n && l[rlgc]<l[smallest]) smallest = rlgc;
        if(lrgc < n && l[lrgc]<l[smallest]) smallest = lrgc;
        if(rrgc < n && l[rrgc]<l[smallest]) smallest = rrgc;
        if (smallest != i) {
            swap(l[i], l[smallest]);
            heapify(l, n, smallest);
        }
    }     
    else{
        if(lc < n && l[lc]>l[largest]) largest = lc;
        if(rc < n && l[rc]>l[largest]) largest = rc;
        if(llgc < n && l[llgc]>l[largest]) largest = llgc;
        if(rlgc < n && l[rlgc]>l[largest]) largest = rlgc;
        if(lrgc < n && l[lrgc]>l[largest]) largest = lrgc;
        if(rrgc < n && l[rrgc]>l[largest]) largest = rrgc;
        if (largest != i) {
            swap(l[i], l[largest]);
            heapify(l, n, largest);
	    }
    }
}

void buildHeap(int l[], int n)
{
	for (int i = (n/4)-1; i >= 0; i--) 
	{
		heapify(l, n, i);
	}
	for (int i = (n/4)-1; i <= n; i++) 
	{
		heapify(l, n, i);
	}
}

void printHeap(int arr[], int N)
{
	cout << "Array representation of Heap is: "<<endl;
	for (int i = 0; i < N; ++i) cout << arr[i] << " ";
}

int print_max(int l[], int n){
    int max = 0;
    int i = 0;
    if(l[1]>l[2]){
        max = l[1];
        i = 1;
    }
    else{
        max = l[2];
        i = 2;
    }
    cout<<max<<endl;
    return i;
}

int print_min(int l[], int n){
    int min = l[0];
    cout<<min<<endl;
    return 0;
}

void delete_max(int l[], int& n){
    int pos = print_max(l, n);
    l[pos] = l[n-1];
    n = n-1;
    heapify(l, n, pos);
    if(pos==1) heapify(l, n, 2);
    else heapify(l, n, 1);
}

void delete_min(int l[], int& n){
    int pos = print_min(l, n);
    l[pos] = l[n-1];
    n = n-1;
    heapify(l, n, pos);
}

void heap(int l[], int n, int i){
    int par = (i-1)/2;
    int parval = l[par];
    int gp = (i-3)/4;
    int gpval = l[gp];
    int level = log2(i);
    if(level%2==0){
        if(l[i]>l[par]) swap(l[i], l[par]);
        if(l[i]<l[gp]) swap(l[i], l[gp]);
        if(gpval!=l[gp]) heap(l, n, gp);
        if(parval!=l[par]) heap(l, n, par);
    }
    else{
        if(l[i]<l[par]) swap(l[i], l[par]);
        if(l[i]>l[gp]) swap(l[i], l[gp]);
        if(gpval!=l[gp]) heap(l, n, gp);
        if(parval!=l[par]) heap(l, n, par);
    }
}

void insert(int l[], int& n, int k){
    n = n+1;
    l[n-1] = k;
    heap(l, n, n-1);
}

// Driver Code
int main(){

	int arr[] = {2,3,5,23,1,11,9,4};
	int N = sizeof(arr) / sizeof(arr[0]);

	buildHeap(arr, N);
	printHeap(arr, N);
    	delete_max(arr, N);
    	printHeap(arr, N);
    	delete_min(arr, N);
    	printHeap(arr, N);
    	delete_min(arr, N);
    	printHeap(arr, N);
    	insert(arr, N, 3);
	printHeap(arr, N);
	return 0;
}