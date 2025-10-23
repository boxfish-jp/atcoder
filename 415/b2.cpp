#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> cargo;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '#') {
      cargo.push_back(i + 1);
      if (cargo.size() == 2) {
        cout << cargo[0] << ',' << cargo[1] << endl;
        cargo.clear();
      }
    }
  }
}
