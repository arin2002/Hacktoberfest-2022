#include <iostream>
using namespace std;
int main()
{
    float n;
    int m;
    try
    {
        cout<<"Outer Try!(Enter values(0-9)"<<endl;
        cin>>m;
        if(m>10||m<0)
            throw m;
        try
        {
            cout<<"Welcome! Enter Value(0-9)"<<endl;
            cin>>n;
            if(n>10||n<0)
            throw n;
            cout<<"Your Number is "<<n<<endl;
        }
        catch(float k)
        {
            cout<<k<<" is not a (float)number between 0 and 9!"<<endl;
        }
    }
    catch(int l)
    {
        cout<<l<<" is not a number between 0 and 9!"<<endl;
    }

    return 0;
}
