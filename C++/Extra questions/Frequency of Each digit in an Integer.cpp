//frequency of digits
#include <iostream>
using namespace std;
int main()
{
    long long int number, digit, apparentNumber, count, lastDigit;
    cout << "\n\n Find frequency of each digit in a given integer:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input any number: ";
    while (!(cin >> number))
    {
        cout << "ERROR! Number is invalid.\nEnter a number again.";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << endl;
    for (digit = 0; digit <= 9; digit++)
    {
        cout << "The frequency of " << digit << " = ";
        count = 0;
        for (apparentNumber = number; apparentNumber > 0; apparentNumber /= 10)
        {
            lastDigit = apparentNumber % 10;
            if (lastDigit == digit)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}