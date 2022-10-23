//         *
//       *   * 
//     *   *   *
//    *  *   *   *
//  *  *   *   *   *

// Print this pattern with "one only 1 loop"


#include<stdio.h>
int main()
{
    int i,flag,rows,k;

    printf("Enter Number of Rows:");
    scanf("%d",&rows);

    for(i=1,k=0;i<=2*rows-1;i++)
    {
        if(i<rows-k)
        {
            printf(" ");
        }
        else
        {
            if(flag){
                printf("*");
            }
            else
            {
                printf(" ");
            }
            flag=1-flag;
        }
        if(i==rows+k)
        {
            k++;
            printf("\n");
            
            if(i==2*rows-1)
            {
                break;
            }
            i=0;
            flag=1;
        }
    }
}