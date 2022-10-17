#include <stdio.h>
int main() {
    int num, n, remainder, result = 0;
    scanf("%d", &num);
    n = num;

    while (n!= 0) {
        remainder = n % 10;
        
       result += remainder * remainder * remainder;
       n/= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
