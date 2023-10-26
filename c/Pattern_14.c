//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          * 
            
// Here we just have to combine the pattern 6 and 13 with little bit changes  



#include<stdio.h>
int main()
{
    int i,j,space,rows;

    printf("Enter number of rows:");
    scanf("%d",&rows);

    // For Upper pyramid code
    for(i=1;i<=rows;i++)                                
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // For Inverted pyramid code
    for(i=rows-1;i>=1;i--)                       /* Here we put rows-1 so that in pattern we get only one line having maximum number of stars  */      
    {
        for(space=1;space<=rows-i;space++)             
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)        
        {
            printf("*");
        }
        printf("\n");
    }
}
