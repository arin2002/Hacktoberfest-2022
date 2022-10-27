// Random Number Game 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,count=1;

    srand(time(0));
    num=rand()%100+1;       // Generates a Random Number between 1 to 100

    // Keep running the loop untill the number is guessed 

    do
    {
        printf("Guess the Number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess>num)
        {
            printf("Lower number Please!\n");
        }
        else if(guess<num)
        {
            printf("Higher number Please!\n");
        }
        else
        {
            printf("You guessed it in only %d attempts",count);
        }
        count++;
    }
    while (num!=guess);
    
}