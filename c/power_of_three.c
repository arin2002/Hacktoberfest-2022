//Check if a given integer is a power of three

#include <stdio.h>
#include<math.h> 
int main() {
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    double power = log10(n) / log10(3);
    if (power - (int)power == 0) {
        printf("YES");
    }
    else{
        printf("NO");
    }
     
    return 0;
}
