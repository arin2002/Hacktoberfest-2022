//contributed by Srijani Guha Ray  <srijani.guharay@gmail.com>


#include<stdio.h>
int main()
{
    int arr[100],temp,i,n,end,start,swapval=1;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    end=n-1;
    start=0;
    printf("\n");

    while(swapval)
    {
        // reset the swapval flag on entering
        // the loop, because it might be true from
        // a previous iteration.
        swapval=0;
        for(i=start;i<end;i++)
        {
            // loop from left to right
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapval=1;
            }

        }

         // move the end point back by one, because
        // item at the end is in its rightful spot
        --end;


        // if nothing moved, then array is sorted
        if(swapval==0)
            break;

        // otherwise, reset the swapval flag so that it
        // can be used in the next stage
        swapval=0;
        for(i=end;i>start;i--)
        {
            if(arr[i]<arr[i-1])
            {
                temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                swapval=1;
            }

        }


        // increase the starting point, because
        // the last stage would have moved the next
        // smallest number to its rightful spot.
        ++start;



    }

    //to print the sorted array
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
