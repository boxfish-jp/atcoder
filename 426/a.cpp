#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> versions = {"Ocelot", "Serval", "Lynx"};
  string X, Y;
  cin >> X >> Y;

  int Xnum;
  int Ynum;
  for (int i = 0; i < versions.size(); i++) {
    if (versions[i] == X) {
      Xnum = i;
    }
    if (versions[i] == Y) {
      Ynum = i;
    }
  }
  if (Xnum >= Ynum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
