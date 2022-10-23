#include<iostream.h>
#include <stdio.h>
void hanoifun(int n, char J, char L, char K)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", J, L);
        return;
    }
    hanoifun(n-1, J, K, L);
    printf("\n Move disk %d from tower %c to tower %c", n, J, L);
    hanoifun(n-1, K, L, J);
}
 
int main()
{
    int n = 4; // n implies the number of disks
    hanoifun(n, 'J', 'L', 'K');  // J, K and L are the name of rod
    return 0;
}
