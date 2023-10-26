#include<bits/stdc++.h>
#include<fstream>
#include<iostream>

#define int long long
using namespace std;

int n;
string s;
bool isper(string a, string b) {
  for (int i = 0; i < (int) a.size(); ++i)
    if (b[i] != a[i]) return false;
  return true;
}
signed main() {
  ifstream in ; in .open("C1Val.txt");
  ofstream out;
  out.open("C1VALOUT.txt");

  int T; in >> T;
  for (int i = 1; i <= T; ++i) {
    out << "Case #" << i << ": ";

    in >> n;
    n--; in >> s;
    puts("");
    int flag = 0;
    for (int i = 0; i <= 1023; ++i) {
      string t;
      for (int j = 0; j < 10; ++j)
        t += ((i >> j) & 1 ? '.' : '-');
      if (!isper(s, t) && !isper(t, s)) {
        n--;
        out << t << endl;
        if (n == 0) {
          flag = 1;
          break;
        }

      }
    }
    if (flag) {
      continue;
    }
  }
}
