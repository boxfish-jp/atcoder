#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int Asum = 0;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    A[i] = Ai;
    Asum += Ai;
  }

  int ATarget = Asum - M;
  for (auto ai : A) {
    if (ai == ATarget) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
