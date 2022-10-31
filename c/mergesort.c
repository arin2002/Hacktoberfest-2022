#include<stdio.h>
#include<stdlib.h>
//Arastu
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;
// i - to mark the index of left subarray (L)
// j - to mark the index of right subaraay (R)
// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount)
	{
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}

	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; 							// base condition. If the array has less than two element, do nothing.

	mid = n/2;  								// find the mid index.
                                                // and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = A[i];      // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i];  // creating right subarray

	MergeSort(L,mid);  						// sorting the left subarray
	MergeSort(R,n-mid); 						// sorting the right subarray
	Merge(A,L,mid,R,n-mid);  					// Merging L and R into A as sorted list.
        free(L);
        free(R);
}

int main() {
    int i,n;
     printf("Enter the no.of elements in the array\n");
    scanf("%d",&n);
    int A[n];

	printf("\n Input the elements of the array\n");
	for(i=0;i<n;i++)
	{scanf("%d",&A[i]);}
	printf("Array Input :\n");
	for(i=0;i<n;i++)
	{	printf("%d\n",A[i]);
	}
/* Code to test the MergeSort function. */
			n = sizeof(A)/sizeof(A[0]);

	// Calling merge sort to sort the array.
	MergeSort(A,n);

	//printing all elements in the array once its sorted.
	printf("Array Elements after sorting are:\n");
	for(i = 0;i <n;i++) printf("%d element is:\t%d\n",i+1,A[i]);
	return 0;

}
