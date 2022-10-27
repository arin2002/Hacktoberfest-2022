#include<stdio.h>

int main()
{
 int option;
 printf("\n Enter Day no between 1-7 : ");
 scanf("%d",&option);
 
 switch(option)
 {
  case 1:
   printf("\n Sunday\n");
   break;
   
  case 2:
   printf("\n Monday\n");
   break;
   
  case 3:
   printf("\n Tuesday\n");
   break;
   
  case 4:
   printf("\n Wednesday\n");
   break;
   
  case 5:
   printf("\n Thursday\n");
   break;
   
  case 6:
   printf("\n Friday\n");
   break;
   
  case 7:
   printf("\n Saturday\n");
   break;
   
  default:
   printf("\n Please Enter Correct Input\n");
   break;
 }
 return 0;
}
