#include<stdio.h>
int main()
{
	int stu=0,sum=0,marks=0,sub;
	
	for(stu=0;stu<5;stu++)
	{
		sum=0;
		printf("\nEnter Marks for student - %d \n",stu);
		
		for(sub=0;sub<3;sub++)
		{
			printf("\n Enter marks for subject %d : \n ",sub);
			scanf("%d",&marks);
			
			sum = sum+marks;
		}
		printf("\n For student- %d:\n",stu);
		printf("\n Sum = %d",sum);
		printf("\n Avg = %.2f\n",(float)sum/sub);
		
	}
	return 0;
}
