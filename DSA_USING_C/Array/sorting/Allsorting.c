#include <stdio.h>
#include <stdlib.h>
void merge(int* arr,int a ,int b,int c,int n);
void mergesort(int arr[],int a,int j,int n);

int main(){
    int i,j,k,temp,n,sortingNum;
    int* arr;
    printf("Enter the size of array :");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated \n");
    }
    else{
        printf("Memory allocated \n");
        printf("Enter the elements in the array \n");
        for(i=0;i<n;i++){
            printf("Element at index %d :-  ",i);
            scanf("%d",&arr[i]);
        }
    }
    printf("The array is :- [");
    for(i=0;i<n-1;i++){
        printf(" %d ,",arr[i]);
    }
    printf(" %d ]\n",arr[n-1]);
    
    

    printf("Sorting methord \n");
    printf("1. Bubble sort \n");
    printf("2. Selection sort \n");
    printf("3. Insertion sort \n");
    printf("4. Merge sort \n");
    scanf("%d",&sortingNum);

    switch (sortingNum)
    {
    case 1:
        printf("Sorting ... \n");
        printf("With Bubble Sort \n");
        for(i=0;i<n;i++){
            for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        printf("Sorted array is :- [");
        for(i=0;i<n-1;i++){
            printf(" %d ,",arr[i]);
        }
        printf(" %d ]\n",arr[n-1]);

        break;
    case 2:
        printf("Sorting ...\n");
        printf("With Selection Sort \n");

        
        for(i=0;i<n;i++){
            int min = arr[i];
            int loc= -1;
            for(j=i;j<n;j++){
                if(arr[j]<min){
                    min = arr[j];
                    loc = j;
                }
            }
            if(loc!=-1){
                temp = arr[i];
                arr[i] = arr[loc];
                arr[loc] = temp;
            }
        }
        printf("Sorted array is :- [");
        for(i=0;i<n-1;i++){
            printf(" %d ,",arr[i]);
        }
        printf(" %d ]\n",arr[n-1]);

        break;
    
    case 3:
        printf("Sorting ... \n");
        printf("With Insertion Sort \n");

        for(i=1;i<n;i++){           // 9 | 7 3 5 2
            temp = arr[i];          // 7
            j = i-1;                // 9
            while(j>=0 && arr[j]>temp){  // j=0  and 9> 7
                arr[j+1] = arr[j];   // 9 | 9 3 5 2 
                j--;                 // j= -1
            }
            arr[j+1] = temp;   
        }
        printf("Sorted array is :- [");
        for(i=0;i<n-1;i++){
            printf(" %d ,",arr[i]);
        }
        printf(" %d ]\n",arr[n-1]);

        break;
    
    case 4:
        printf("Sorting ... \n");
        printf("With Selection Sort \n");
        int p = 0;
        int r = n-1;
        mergesort(arr,p,r,n);
        printf("Sorted array is :- [");
        for(i=0;i<n-1;i++){
            printf(" %d ,",arr[i]);
        }
        printf(" %d ]\n",arr[n-1]);



        break;

    
        

    default:
        break;
    }


}

void mergesort(int* arr,int p,int r,int n){
    int q ;
    if(p<r){
        q = (p+r)/2;

        mergesort(arr,p,q,n);
        mergesort(arr,q+1,r,n);

        merge(arr,p,q,r,n);
    }
}
void merge(int* arr,int p ,int q,int r,int n){
    int k = 0,i=p,j=q+1,b[n];
    while (i<=q && j<=r)
    {
        if(arr[i]<=arr[j]){
            b[k++]= arr[i++];
        }
        else{
            b[k++]= arr[j++];
        }
    }

    while (i<=q)
    {
        b[k++]=arr[i++];
    }
    while (j<=r)
    {
        b[k++]=arr[j++];
    }
    for(int l=r;l>=p;l--){
        arr[l]=b[--k];
    }

}


