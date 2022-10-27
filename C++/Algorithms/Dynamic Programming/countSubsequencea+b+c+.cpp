// problem statement: we need to count the subsequences of the form A+B+C+ (i.e any no.of A then any no.of B then any no.of C (that no. can't be zero))
//Example subsequences: aaabc, aabbc, aabcc, aabc, abccccc etc.
#include<iostream>
using namespace std;
int main(){
    string str = "abcabc";
    int a,ab,abc;
    a = ab = abc = 0;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(ch == 'a'){
           a = 2*a + 1;
        }
        else if(ch == 'b'){
            ab = 2*ab + a;
        }
        else{
            abc = 2*abc + ab;
        }
    }
    cout<<"count of subsequences of the type a+b+c+ is: "<<abc<<"\n";
}