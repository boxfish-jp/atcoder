#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  string S;
  cin >> S;
  for (int i = L - 1; i < R; i++) {
    if (S[i] == 'x') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
