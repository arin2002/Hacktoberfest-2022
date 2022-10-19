//Program to Find HCF 
#include <iostream>
using namespace std;
int main() {
    int number1, number2, hcf;
    cout << "Enter number 1:";
    while (!(cin >> number1) || number1 < 0)
    {
        cout << "ERROR! Number is invalid.\nEnter a number again.";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << "Enter number 2:";
    while (!(cin >> number2) || number2 < 0)
    {
        cout << "ERROR! Number is invalid.\nEnter a number again.";
        cin.clear();
        cin.ignore(123, '\n');
    }
    for (int i = 1; i <= (number2 / 2); i++)
    {
        if (number1 % i == 0 && number2 % i == 0) {
            hcf = i;
        }
    }

    cout << "HCF of " << number1 << " and " << number2 << " is: " << hcf << endl;

    return 0;
}