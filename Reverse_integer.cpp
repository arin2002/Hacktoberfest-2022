#include<iostream>
using namespace std;

class Solution 
{
public:
    int reverse(int x) 
    {
       long int c=0;
        while (x>0)
        {
            c=c*10;
            c=c+ x%10;
            x=x/10;
        }

        if(x<0)
        {
            x=x*(-1);
             while (x>0)
        {
            c=c*10;
            c=c+ x%10;
            x=x/10;
        }
        c=c*(-1);
        }
      
       return int(c); 
    }
};

int main()
{
    int x,num;
    cout<<"Enter the number you want to reverse"<<endl;
    cin>>x;
    Solution obj;
    num=obj.reverse(x);
    cout<<"Reversed number = "<<num;    
}