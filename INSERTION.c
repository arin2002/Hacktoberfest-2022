#include<stdio.h>
#include<stdlib.h>
void insert(int *,int);
int main()
{
	int i,n;
	int *a;
	printf("BUBBLE SORT\n");
	printf("Enter The Number of Elements\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter %d Element \n",i+1);
		scanf("%d",&a[i]);
	}
	display(a,n);
	insert(a,n);
	return 0;
}
void insert(int *a,int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=a[i];
		while(j>=0 && a[j+1]<a[j])
		{
			swap(&a[j+1],&a[j]);
			j--;
		}
		a[j+1]=x;
	}
	display(a,n);
		//5 4 3 2 1
		//4 5 3 2 1
}
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void display(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
