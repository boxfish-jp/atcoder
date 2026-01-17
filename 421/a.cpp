#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N + 1);

  for (int i = 1; i <= N; i++) {
    string Si;
    cin >> Si;
    S[i] = Si;
  }

  int X;
  string Y;
  cin >> X >> Y;

  if (S[X] == Y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
