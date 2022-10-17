#include<stdio.h>
int nth_term(int n , int a, int b, int c){
  if(n==1)
    return a;
  if(n==2)
    return b;
  if(n==3)
    return c;
  return nth_term(n-1,a,b,c)+nth_term(n-2,a,b,c)+nth_term(n-3,a,b,c);
}
int main()
{
  int n,a ,b,c;
  scanf("%d %d %d %d ",&n, &a,&b,&c);
  int ans = nth_term(n,a,b,c);
  printf("%d",ans);
  return 0;
}
