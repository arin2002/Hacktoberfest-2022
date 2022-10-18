#include <iostream>
#include <conio.h>

using namespace std;

union money
{
    int gold;
    char nameToBorrow;
    float pounds;
};

int main()
{
    union money m1;
    m1.gold = 23;
    m1.nameToBorrow = 'k';
    cout << m1.gold << endl;
    return 0;
}
