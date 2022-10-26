#include <iostream>
using namespace std;

int main() 
{

  int year;
  cout << "Enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400
  if (year % 400 == 0) 
  {
    cout << year << " is a leap year.";
  }
  // century year which are not divisible by 400 
  // are not leap year
  else if (year % 100 == 0)
  {
    cout << year << " is not a leap year.";
  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) 
  {
    cout << year << " is a leap year.";
  }
  else 
  {
    cout << year << " is not a leap year.";
  }

  return 0;
}
