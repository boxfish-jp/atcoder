#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> founds(26, 0);

  for (char si : s) {
    founds[si - 'a']++;
  }

  for (int i = 0; i < founds.size(); i++) {
    if (!founds[i]) {
      cout << char('a' + i) << endl;
      return 0;
    }
  }
}
