#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> calcPos(int N, int K, int X) {
  vector<int> pos(K, 0);
  for (int i = K - 1; i >= 0; i--) {
    pos[i] = X % N;
    X = X / N;
  }
  return pos;
}

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  vector<string> S;
  for (int i = 0; i < N; i++) {
    string si;
    cin >> si;
    S.push_back(si);
  }
  sort(S.begin(), S.end());

  int max = 1;
  for (int i = 0; i < K; i++) {
    max = max * N;
  }

  vector<string> f;
  for (int a = 0; a < max; a++) {
    vector<int> pos = calcPos(N, K, a);
    string ai = "";
    for (auto p : pos) {
      ai += S[p];
    }
    f.push_back(ai);
  }
  sort(f.begin(), f.end());
  cout << f[X - 1] << endl;
}
