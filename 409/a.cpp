#include <bits/stdc++.h>
using namespace std;

int main() {
  int length;
  cin >> length;

  vector<char> t(length);
  for (int i = 0; i < length; i++) {
    cin >> t[i];
  }
  for (int i = 0; i < length; i++) {
    char ai;
    cin >> ai;
    if (ai == t[i] && ai == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
