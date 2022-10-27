#include<stdio.h>



void printarray(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


void bubblesort(int a[],int size)
{
	int temp,flag=0;
	
	for(int i=0;i<size-1;i++)	// for number of passes
	{
		for(int j=0;j<size-1-i;j++)	// for number of comparison in each pass
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
	        if(flag==0)
			break;
	}
}

int main()
{
	int a[]={8,2,4,1,6,3};
	int size=sizeof(a)/sizeof(int);
	
	printarray(a,size);
	bubblesort(a,size);
	printarray(a,size);
	return 0;
}
