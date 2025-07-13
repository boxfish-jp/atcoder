#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  string T;

  cin >> S;
  cin >> T;

  for (int i = 1; i < S.size(); i++) {
    if (S[i] < 'a') {
      for (int j = 0; j < T.size(); j++) {
        if (T[j] == S[i - 1]) {
          break;
        }
        if (j == T.size() - 1) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;
}
