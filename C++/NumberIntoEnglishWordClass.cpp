#include <iostream>
#include <string>
using namespace std;
class Numbers
{

private:
  
    int number;

public:
    Numbers(int x)
    {
       this->number = x;

    }
    void print();
}; 

void Numbers::print()
{
    int n;

   static  string lessThan20[20] = {"zero", "one", "two", "three", "four", "five",
                            "six", "seven", "eight", "nine", "ten", "eleven",
                            "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                            "seventeen","eighteen", "nineteen" };

    string hundred = "hundred";

    string thousand = "thousand";

    string tens[10] = { "zero","ten","twenty","thirty","forty","fifty", "sixty","seventy","eighty","ninety" };

    if (number == 0)
    {
        cout << lessThan20[number] << endl;
        return;
    }

    n = number / 1000;

    if (n > 0)
    {

        cout << lessThan20[n] << " " << thousand << " ";
    }
  
    number = number % 1000;

    n = number / 100;

    if (n > 0)

    {
        cout << lessThan20[n] << " " << hundred << " ";
    }
    number = number % 100;

   
    if (number>= 20)
    {
     
        n = number / 10;

        if (n > 0)
        {
            cout << tens[n] << " ";
        }
    }

    else if (number >= 10)
    {
        cout << lessThan20[number] << " ";
        return;
    }

    number = number % 10;

    if (number > 0)
    {
        cout << lessThan20[number];
    }
    cout << " ";
}
int main()
{
    int num;
    cout << "Enter the number between (0-9999) to be converted into English" << endl;
    cin >> num;
    while (num < 0 || num>9999)
    {
        cout << "Enter the number in valid range" << endl;
        cin >> num;
    }
    Numbers n(num);
    n.print();
    

}