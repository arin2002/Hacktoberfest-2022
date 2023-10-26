#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n;  cin>>n;
   bool pri[n+1];
    memset(pri, true, sizeof(pri));
    cout<<"Prime numbers samller than n are: "<<endl;
    for (int p=2;p*p<=n;p++)
    {
        if (pri[p]==true)
        {
            for (int i=p*p;i<=n;i+=p)
                pri[i] = false;
        }
    }
    for (int p=2;p<=n;p++)
        if (pri[p])
            cout << p << " ";
}
