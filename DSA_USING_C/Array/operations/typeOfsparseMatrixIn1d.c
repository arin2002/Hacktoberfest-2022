#include <stdio.h>
int main()
{
    int n, m, i, j;
    int value;
    printf("Enter the Size of Coloumns :- ");
    scanf("%d", &n);
    printf("Enter the Size of Rows:- ");
    scanf("%d", &m);
    int arr[n][m];
    int b[n*m];
    int counterForB=0;
    int k = 0,a=0;
    while(a==0){
        printf("1. Lower Triangular Sparse Matrix \n" );
        printf("2. Upper Triangular Sparse Matrix \n" );
        printf("3. Tri-diagonal Sparse Matrices \n" );
        printf("4. Exit \n");
        printf("Enter Here :- ");
        scanf("%d",&value);
        switch(value){
        case 1:
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {   
                    if(i<j){
                        arr[i][j]=0;
                        k++;
                    }
                    else{
                        printf("Enter the value at Arr[%d,%d] : ", i,j);
                        scanf("%d", &arr[i][j]);
                        b[counterForB++] = arr[i][j];
                    }
                    
                }
            }
            for (i = 0; i < n; i++)
            {
                printf(" \n| ");
                for (j = 0; j < m; j++)
                {
                    printf("  %d  ", arr[i][j]);
                }
                printf(" | \n");
            }
            printf("\nArray (in  1D):\n");
            printf("\n[ ");
            for(i=0;i<counterForB;i++)
            {
                printf(" %d ",b[i]);
            }
            printf(" ] \n\n");
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {   
                    if(i>j){
                        arr[i][j]=0;
                        k++;
                    }
                    else{
                        printf("Enter the value at Arr[%d,%d] : ", i,j);
                        scanf("%d", &arr[i][j]);
                        b[counterForB++] = arr[i][j];
                    }
                    
                }
            }
            for (i = 0; i < n; i++)
            {
                printf(" \n| ");
                for (j = 0; j < m; j++)
                {
                    printf("  %d  ", arr[i][j]);
                }
                printf(" | \n");
            }
            printf("\nArray (in  1D):\n");
            printf("\n[ ");
            for(i=0;i<counterForB;i++)
            {
                printf(" %d ",b[i]);
            }
            printf(" ] \n\n");
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {   
                    if((i-j)<=1 && (i-j)>=-1){
                        printf("Enter the value at Arr[%d,%d] : ", i,j);
                        scanf("%d", &arr[i][j]);
                        b[counterForB++] = arr[i][j];
                        
                    }
                    else{
                        arr[i][j]=0;
                        k++;
                    }
                    
                }
            }
            for (i = 0; i < n; i++)
            {
                printf(" \n| ");
                for (j = 0; j < m; j++)
                {
                    printf("  %d  ", arr[i][j]);
                }
                printf(" | \n");
            }
            printf("\nArray (in  1D):\n");
            printf("\n[ ");
            for(i=0;i<counterForB;i++)
            {
                printf(" %d ",b[i]);
            }
            printf(" ] \n\n");
            break;
        default:
            a=1;
            break;
        
        }
    }
   
    
}