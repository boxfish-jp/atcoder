#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<long long> Asums(N + 1, 0);
  long long tempSums = 0;
  for (int i = 1; i <= N; i++) {
    int Ai;
    cin >> Ai;
    tempSums += Ai;
    Asums[i] = tempSums;
  }

  long long startIndex = 0;
  for (int q = 0; q < Q; q++) {
    int queryType;
    cin >> queryType;
    if (queryType == 1) {
      int c;
      cin >> c;
      startIndex += c;
    } else if (queryType == 2) {
      long long l, r;
      cin >> l >> r;
      long long fixedL = (startIndex + l - 1) % N;
      long long fixedR = (startIndex + r) % N;
      fixedR = fixedR ? fixedR : N;
      if ((fixedL < fixedR) || (l == r)) {
        cout << Asums[fixedR] - Asums[fixedL] << endl;
      } else {
        cout << Asums[N] - Asums[fixedL] + Asums[fixedR] << endl;
      }
    }
  }
}
