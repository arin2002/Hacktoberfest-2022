#include<stdio.h>
#include<stdlib.h>
int main()
{
	int** p;
	int r,c,i,j;
	printf("enter number of rows and columns");
	scanf("%d%d",&r,&c);	
	p =(int**) malloc(sizeof(int* )*r);
	printf("Enter eleemnts of matrix");
	for(i=0;i<r;i++)
	p[i]  = (int*)malloc(sizeof(int)*c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&p[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d\t",p[i][j]);
	for(i=0;i<r;i++)
	free(p[i]);
	free(p);
}
