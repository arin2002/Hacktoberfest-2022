#include<stdio.h>

int main()
{
    int a[2][3]={0,1,2,4,5,5};      //At Compile time
    int b[3][3]={{0,0,0},{1,1,1}};
    int c[2][3]={
        {1,2,3},
        {2,4,6}
    };

    int d[][3]={{0,0,0},{1,2,3}};
    int e[2][4]={0};            // No value is entered in the memory 

    // In runtime 

    int f[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;i<3;j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    printf("%d",&f[0][2]);

}