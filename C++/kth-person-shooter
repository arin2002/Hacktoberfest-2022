
#include <iostream>

using namespace std;
int kill(int n,int k)
{
    if(n==1) return 0;
    
    return (kill(n-1,k)+k) % n;
}

int main()
{
    int c=kill(5,3);
    cout<<c;

    return 0;
}
