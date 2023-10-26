#include <iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        cout<<"Enter 2 numbers : "<<endl;
        cin>>a>>b;
        if(b==0)
            throw 0;
        cout<<"Division :"<<a/b;
    }
    catch(int x)
    {
        cout<<"Division not possible!";
    }
    return 0;
}
