#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> A(N + 1, 0);
  vector<int> B(N + 1, 0);
  for (int i = 1; i < N + 1; i++) {
    int Ai;
    cin >> Ai;
    A[i] = Ai;
  }

  for (int i = 1; i < N + 1; i++) {
    int Bi;
    cin >> Bi;
    B[i] = Bi;
  }

  long long sum = 0;
  for (int i = 1; i < N + 1; i++) {
    sum += min(A[i], B[i]);
  }

  for (int i = 0; i < Q; i++) {
    char ci;
    cin >> ci;
    int xi, yi;
    cin >> xi >> yi;
    switch (ci) {
    case 'A':
      sum += min(yi, B[xi]) - min(A[xi], B[xi]);
      cout << sum << endl;
      A[xi] = yi;
      break;
    case 'B':
      sum += min(A[xi], yi) - min(A[xi], B[xi]);
      cout << sum << endl;
      B[xi] = yi;
      break;
    }
  }
}
