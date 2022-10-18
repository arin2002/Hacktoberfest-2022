#include <iostream>
#include <conio.h>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, int R);
    BankDeposit(int p, int y, float r);
    void show(void);
};

void BankDeposit::show(void)
{
    cout << endl
         << "principal amount was " << principal
         << " return value after " << years << " year is " << returnValue << endl;
}
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
int main()
{
    BankDeposit BD1, BD2, BD3;

    int p, y;
    float r; // decimal form
    int R;   // percentage form

    cout << endl
         << "Enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    BD1 = BankDeposit(p, y, r);
    BD1.show();

    cout << endl
         << "Enter the value of p y and R " << endl;
    cin >> p >> y >> R;
    BD2 = BankDeposit(p, y, R);
    BD2.show();
    return 0;
}
