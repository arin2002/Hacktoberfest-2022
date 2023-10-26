// ASCII value of smiling face is 1

#include<stdio.h>
int main()
{
    int r,c;

    for(r=0;r<=24;r++)              // Fills rows 0 to 24
    {
        for(c=0;c<=79;c++)          // Fills column 0 to 79
        {
            printf("%c",1);        // Here we put 1 because smiling face has ASCII value of 1
        }
    }
}