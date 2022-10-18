//GOLDMAN SACH CODING ROUND - 28th JUNE 2021//

//QUESTION- 4: Given a number n, the task is to find n’th Ugly number.


//THIS CODE TIME COMPLEXITY IS O(N)
//Auxiliary Space: O(N)


#include<iostream>
using namespace std;

int getNthUglyNo(int n){
    int ugly[n];
    ugly[0] = 1;
    int next_ugly_number = 1;
    int i2=0,i3=0,i5 = 0;
    int mul2 = 2;
    int mul3 = 3;
    int mul5 = 5;
    for(int i=1;i<n;i++){
        next_ugly_number = min(mul2,min(mul3,mul5));
        ugly[i] = next_ugly_number;
        if(next_ugly_number == mul2){
            i2++;
            mul2 = ugly[i2] *2;
        }
        if(next_ugly_number == mul3){
            i3++;
            mul3 = ugly[i3] *3;
        }
        if(next_ugly_number == mul5){
            i5++;
            mul5 = ugly[i5] *5;
        }
    }
    return next_ugly_number;
}



int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<getNthUglyNo(n);
    return 0;
}