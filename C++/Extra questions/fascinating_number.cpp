/* Fascinating Numbers: Some numbers of 3 digits or more exhibit a very interesting property. 
The property is such that, when the number is multiplied by 2 and 3, and both these products are 
concatenated with the original number, all digits from 1 to 9 are present exactly once, regardless of the number of zeroes.

Example:-
number = 192

192 * 1 = 192
192 * 2 = 384
192 * 3 = 576

Concatening them = 192384576
Containing all digits from 1-9 hence a Fascinating Number */

#include<iostream>
using namespace std;

//Function to check if a number is fascinating number or not
bool is_fascinating(int n)
{
    string s="";
    int pro;
    //Forming the concatenation string
    for(int i=1;i<=3;i++)
    {
        pro = n * i;
        s = s + to_string(pro);
    }
    if(s.length() < 9)
        return false;

    int num = stoi(s);
    int rem,chk=0;
    //Checking if the resultant number has all digits 1-9
    for(int i=1;i<=9;i++)
    {
        int temp = num;
        chk=0;
        while(temp>0)
        {
            rem = temp % 10;
            if(rem == i)
            {
                chk = 1;
                break;
            }
            temp = temp/10;
        }
        if(chk == 0)
            return false;
    }
    return true;
}

//Driver code
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    //Function call
    bool res = is_fascinating(n);
    if(res == true)
        cout<<n<<" is a Fascinating number"<<endl;
    else
        cout<<n<<" is not a Fascinating Number"<<endl;
  
    return 0;
}

