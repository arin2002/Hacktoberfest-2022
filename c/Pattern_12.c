// ABCDCBA
// ABC CBA
// AB   BA
// A     A

#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;                      // ASCII code of A is 65 so this will increment to 66 which is ASCII code of B
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}