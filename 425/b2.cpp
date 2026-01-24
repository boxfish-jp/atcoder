#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A;
  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    A.push_back(Ai);
  }

  vector<bool> used(N + 1, false);
  used[0] = true;

  vector<int> P = A;
  for (auto pi = P.begin(); pi != P.end(); ++pi) {
    if (*pi == -1) {
      continue;
    }
    if (used[*pi]) {
      cout << "No" << endl;
      return 0;
    }
    used[*pi] = true;
  }

  auto usedi = 0;

  for (auto pi = P.begin(); pi != P.end(); ++pi) {
    if (*pi != -1) {
      continue;
    }
    while (usedi <= N && used[usedi]) {
      usedi++;
    }
    if (usedi > N) {
      cout << "No" << endl;
      return 0;
    }
    *pi = usedi;
    used[usedi] = true;
  }

  cout << "Yes" << endl;
  for (auto pi : P) {
    cout << pi << " ";
  }
  cout << endl;
}
