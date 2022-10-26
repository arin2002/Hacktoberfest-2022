#include<stdio.h>
void sort(int *x);
int main()
{
  int a[5], i;
  int *pa;
  pa =  &a[0];
  printf("ENTER THE ELEMENTS: ");
  for(i=0;i<5;i++)
    scanf("%d",pa+i);
  sort( &a[0] );

  printf("AFTER SORTING: ");
  for(i=0;i<5;i++)
  {
    printf("%d  ", *(pa+i));
  }
  return 0;
}
void sort(int *x)
{
  int i, j, temp;

  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if( *(x+i) > *(x+j) )
      {
        temp = *(x+i);
        *(x+i) = *(x+j);
        *(x+j) = temp;
      }
    }
  }
}
