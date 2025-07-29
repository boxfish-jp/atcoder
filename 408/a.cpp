#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  double S;
  cin >> N >> S;

  double before = 0;
  for (int i = 0; i < N; i++) {
    double ti;
    cin >> ti;
    if (ti - before >= S + 0.5) {
      cout << "No" << endl;
      return 0;
    }
    before = ti;
  }
  cout << "Yes" << endl;
}
