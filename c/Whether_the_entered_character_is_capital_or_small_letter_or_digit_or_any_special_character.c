//  Characters	ASCII Values
//   A - Z		   65 - 90
//   a - z		   97 - 122
//   0 - 9		   48 - 57
//special symbols	0 - 47, 58 - 64, 91 - 96, 123 - 127

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	
	if(ch>=97 && ch<=122)
	{
		printf("Character is Lowercase\n");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("Character is Uppercase\n");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("Number character b/w 0-9\n");
	}
	else
	{
		printf("It is Special Character\n");
	}
	return 0;
}
