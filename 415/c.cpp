#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    string S;
    cin >> N >> S;
    int okLen = 1 << N;
    vector<int> ok(okLen, 0);
    ok[0] = 1;
    for (int i = 0; i < okLen; i++) {
      if (ok[i]) {
        for (int maskPos = 0; maskPos < N; maskPos++) {
          if (!(i & (1 << maskPos))) {
            auto next = i | (1 << maskPos);
            if (S[next - 1] == '0') {
              ok[next] = 1;
            }
          }
        }
      }
    }
    if (ok[okLen - 1]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
