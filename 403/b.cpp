#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  /*
  string s1 = "hogehogeあおhoge";
  string s2 = "あか";

  if (s1.find(s2) == string::npos) {
    cout << "No" << endl;
  }
  */

  string T;
  string U;

  cin >> T >> U;

  vector<int> hatenaPos;
  for (int i = 0; i < T.length(); i++) {
    if (T[i] == '?') {
      hatenaPos.push_back(i);
    }
  }

  for (int s = 0; s < 26; s++) {
    char sc = 'a' + s;
    for (int t = 0; t < 26; t++) {
      char tc = 'a' + t;
      for (int u = 0; u < 26; u++) {
        char uc = 'a' + u;
        for (int v = 0; v < 26; v++) {
          char vc = 'a' + v;
          string tempT = T;
          tempT[hatenaPos[0]] = sc;
          tempT[hatenaPos[1]] = tc;
          tempT[hatenaPos[2]] = uc;
          tempT[hatenaPos[3]] = vc;
          if (tempT.find(U) != string::npos) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "No" << endl;
}
