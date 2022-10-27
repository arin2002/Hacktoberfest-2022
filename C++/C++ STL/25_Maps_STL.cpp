// Link: https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,type;
    cin>>q;
    string name;
    int marks;

    map<string,int> m;
    for(int i=0;i<q;i++)
    {
     cin>>type;
    switch(type) {
    
    case 1:
    cin>>name>>marks;

    if(m.find(name)==m.end())
    m.insert(make_pair(name,marks));
else
m[name]+=marks;

break;

case 2:
cin>>name;
m.erase(name);
break;

case 3:
cin>>name;
m.find(name)!=m.end()?cout<<m.find(name)->second<<endl:cout<<"0"<<endl;
break;

}

} 
    return 0;
}
