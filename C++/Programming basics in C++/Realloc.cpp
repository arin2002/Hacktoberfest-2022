#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p = (int*) calloc(sizeof (int),5);
	for(i=0;i<5;i++)
	scanf("%d",&p[i]);
	for(i=0;i<5;i++)
	printf("%d",p[i]);
	//scanf("%d",&p[6]);
	p = (int*) realloc(p,sizeof (int)*7);
	scanf("%d",&p[6]);
	free(p);

}
