#include<stdio.h>

void change(int a);
int main()
{
    int b=344;
    printf("The value of b before change is %d\n",b);
    change(b);                                              // Misnomer
    printf("The value of b after change %d\n",b);
}
void change(int b)
{
    b=77;
}

// Note: If the passed variable is changed inside the function, the function call does'nt change the value in the calling function