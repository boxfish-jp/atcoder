#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  while (true) {
    vector<int> cargo;
    bool wasNoCargo = true;
    for (int i = 0; i < S.size(); i++) {
      if (S[i] == '#') {
        cargo.push_back(i + 1);
        S[i] = '.';
        wasNoCargo = false;
        if (cargo.size() == 2) {
          cout << cargo[0] << ',' << cargo[1] << endl;
          break;
        }
      }
    }
    if (wasNoCargo) {
      return 0;
    }
  }
}
