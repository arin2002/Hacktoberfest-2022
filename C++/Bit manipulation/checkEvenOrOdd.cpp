
#include <iostream>
using namespace std;
 

bool isEven(int n)
{
     

return (!(n & 1));
}
 

int main()
{
int n;
cin>>n;

isEven(n)? cout << "Even" :
           cout << "Odd";
 
return 0;
}