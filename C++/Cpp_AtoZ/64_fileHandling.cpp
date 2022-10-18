#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    string s1 = "KunalDhongade";
    string s2;
    ifstream out("64_sample.txt");
    out >> s2;
    cout << s2;
    return 0;
}
