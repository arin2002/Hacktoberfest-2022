//     1
//    212
//   32123
//  4321234

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=i;
        
        for(j=1;j<=7;j++)
        {
            if (j>=5-i && j<=i+3)
            {
                printf("%d",k);
                j<4?k--:k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}