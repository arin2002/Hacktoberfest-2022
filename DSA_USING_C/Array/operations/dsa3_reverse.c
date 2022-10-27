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
    for(i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    printf("[");
	for(i=0;i<n-1;i++)
    {
		printf(" %d ,", a[i]);
    }
    printf(" %d ]",a[n-1]);
}