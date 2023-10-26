#include <stdio.h>
void mergesort(int arr[],int a,int b,int n);
void merge(int arr[],int a ,int b,int c,int n);

int main(){
    int arr[50],n,i,p,r;
    printf("Enter the Size of array:-(10) ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value at the %d index :- ",i);
        scanf("%d",&arr[i]);
    }

    mergesort(arr,0,9,n);


    for(int t=0;t<n;t++){
        printf("%d ",arr[t]);
    }
    printf("\n");
    

}

void mergesort(int a[],int p,int r,int n){
    int q;
    if(p<r){
        q = (p+r)/2;
        
        mergesort(a,p,q,n);
        mergesort(a,q+1,r,n);
        merge(a,p,q,r,n);
    }
    
}

void merge(int a[],int p,int q,int r,int n){
    int k = 0,i=p,j=q+1,b[n];
    while (i<=q && j<=r)
    {
        if(a[i]<=a[j]){
            b[k++]= a[i++];
        }
        else{
            b[k++]= a[j++];
        }
    }

    while (i<=q)
    {
        b[k++]=a[i++];
    }
    while (j<=r)
    {
        b[k++]=a[j++];
    }
    for(int l=r;l>=p;l--){
        a[l]=b[--k];
    }

}
