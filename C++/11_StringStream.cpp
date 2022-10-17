// Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> result;
    stringstream ss(str);
    char ch;
    int tmp;
    while (ss >> tmp) {
        result.push_back(tmp);
        ss >> ch;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }
    
    return 0;
}