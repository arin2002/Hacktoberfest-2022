#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3)return true;
    if(n%2 == 0 || n%3 == 0) return false;
    
    for(int i=0;i*i<=n;i=i+6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

int main()
{
    if(isPrime)cout<<"the given number is prime";
    else cout<<"the given number is not prime";

    return 0;
}
