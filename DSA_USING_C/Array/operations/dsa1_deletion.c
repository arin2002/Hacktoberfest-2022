#include <stdio.h>

int main(){
    int a[10],i,n,m,k;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    printf("Enter the data-\n");
    for(i=0;i<n;i++){
        printf("Data %d -",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter at which index you want to delete :- ");
    scanf("%d",&k);

    printf("---deleted----%d------\n",a[k]);


    for(i=k;i<n-1;i++){
        a[i] = a[i+1];
    }
    n = n -1;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

// for(i=n-1;i>=k;i--){
    //     a[i+1]= a[i];
    // }
    // printf("Enter the new number :- ");
    // scanf("%d",&a[k]);