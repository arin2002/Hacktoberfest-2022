//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
//   3 2 3 4
//     1 2 3
//       1 2
//         1


#include<stdio.h>
int main()
{
    int i,j,k=0,x;

    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        x=1;

        for(j=1;j<=5;j++)
        {
            if(j>=6-k)
            {
                printf("%d",x);
                x++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}