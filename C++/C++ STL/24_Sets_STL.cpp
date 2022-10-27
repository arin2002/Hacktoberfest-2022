// Link: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, y, x;
    set<int> s;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> y >> x;
        if(y == 1){
            s.insert(x);
        }
        else if(y == 2){
            s.erase(x);
        }
        else{
            set<int>::iterator itr = s.find(x);
            if(itr == s.end()){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}