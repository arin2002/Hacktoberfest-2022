#include <iostream>

using namespace std;

void TOH(int n, char a, char b, char c){
    if(n==1){
        cout<<"Move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    TOH(n-1,a,c,b);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    TOH(n-1,b,a,c);
}

int main()
{
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}
