#include<stdio.h>
//Arastu
void selection_sort(int, int*);
void main()
{	int n, list[20], i;
	printf("input the number of elements of the list\n ");
	scanf("%d",&n);
	printf("\n Input the elements of the list\n");
	for(i=0;i<n;i++)
	{scanf("%d",&list[i]);}
	printf("List Input :\n");
	for(i=0;i<n;i++)
	{	printf("%d\n",list[i]);
	}
	selection_sort(n,list);
}

void selection_sort(int n,int arr[])
{	int min, temp, pos, i, j;
	for(i=0;i<n-1;i++)
	{ 	min =arr[i];
		pos= i;
		for(j=i+1;j<n;j++)
		{	if(min>arr[j])
			{	min= arr[j];
				pos=j;
			}
		}
	temp = arr[i];
	arr[i]=arr[pos];
	arr[pos]=temp;
}
printf("Entered list is as Follows:\n");
for(i=0;i<n;i++){	printf("%d\n", arr[i]);
		}
}

