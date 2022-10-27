// \*****/
// *\***/*
// **\*/**
// ***/***
// **/*\**
// */***\*
// /*****\   


#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==i || j==8-i)                      // Condition for \ and /
            {
                if(i==8-j)                          //If we want to print / we simply replace this with condition i==j
                {
                    printf("/");      
                }
                else
                {
                    printf("\\");                    // Here we use \\ because \ is escape sequence.
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}




