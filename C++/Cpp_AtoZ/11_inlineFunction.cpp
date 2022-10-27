#include <iostream>
#include <conio.h>

using namespace std;

int product(int a, int b)
{
    static int c = 0; // Initialization runs only one time // function chi own property
    c = c + 1;        // next time this function is run, the value of c variable will be retained
    return a * b + c;
}

// jevha function madhe nahi chya barabar kam hot tevha inline function cha use karava
// recursion , static variable, loops, switch in this case don't use inline function
inline int divide(int a, int b) // use inline when simplest code want to do
{
    return a / b; // jevha function madhe nahi chya barobar kam hot asel aani function madhe
}

float moneyReceived(float currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int s(const char *p)
{
    int i = 0, cnt = 0;
    while (p[i] != '\0')
    {
        p[i];
        i++;
        cnt++;
    }
    return cnt;
}

int main()
{
    int a = 24, b = 2;
    float money = 100000;
    char p[20];
    cout << "a is " << a << endl
         << "b is " << b << endl
         << endl;
    // cout << "the product of a & b is " << product(a, b) << endl
    //      << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;
    // cout << "the divide of a & b is " << divide(a, b) << endl;

    cout << p << endl;
    cout << "Length of string is " << s(p) << endl;

    cout << "If you have " << money << " rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl
         << endl;
    cout << "for VIP, If you have " << money << " rs in your bank account, you will receive " << moneyReceived(money, 1.10) << " Rs after 1 year" << endl
         << endl;
    cout << "enter str" << endl;
    cin >> p;
    cout << "Length of string is " << s(p) << endl;
    return 0;
}
