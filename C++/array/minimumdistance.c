/*You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.

Input:
N = 4
A[] = {1,2,3,2}
x = 1, y = 2
Output: 1
*/
#include <stdio.h>
int distance(int xpos,int ypos)
{
   
    int dist=ypos-(xpos+1);
    printf("\n%d",dist);
}
   
int posfind(int arr[],int n,int x,int y)
{
    int xpos,ypos=-1,i;
    for(i=0;i<n;i++)
    {
      if(arr[i]==x)
           {
           xpos=i;
          
           break;
           }
    }
    
    for(i=xpos;i<n;i++)
    {
     if(arr[i]==y)
     {
     ypos=i;
     
     break;}
    }
    if(xpos==-1||ypos==-1)
    distance(0,0);
    else
    distance(xpos,ypos);
     
}

int main()
  {
    int arr[50];
    int n,x,y=0;
    scanf("%d",&n);
    arr[n];
    for(int i=0;i<n;i++)  
    {
     scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    scanf("%d",&y);
    posfind(arr,n,x,y);
    
    

}
