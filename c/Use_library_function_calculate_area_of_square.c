#include<stdio.h>
#include<math.h>

int main()
{
    int side;     

    printf("Enter the side of square:");
    scanf("%ld",&side);

    printf("\nArea of square of side %d = %f",side,pow(side,2));

    return 0;
}

// Note:- pow() function only return double data types that's why we use float