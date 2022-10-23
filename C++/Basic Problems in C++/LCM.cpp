#include <iostream>
using namespace std;
 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
int main()
{
    int a , b ;
  cin>>a>>b;
    cout <<"LCM of " << a << " and "
         << b << " is " << lcm(a, b);
    return 0;
}
