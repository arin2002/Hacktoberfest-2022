#include<stdio.h>
int main()
{
  int hr;


    for(hr=0;hr<=23;hr++)              // for loop for 24 hours 
    {
        if(hr==0)
        {
            printf("Midnight\n");
            continue;
        }
        if(hr<12)
        {
            printf("Good Morning %d AM\n",hr);
        }
        if(hr==12)
        {
            printf("%d noon\n",hr);
        }
        if(hr>12)
        {
            printf("%d PM\n",hr%12);
        }

    }
}