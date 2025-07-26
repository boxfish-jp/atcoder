#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int max = 0;
  int min = pow(10, 9);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] > max) {
      max = A[i];
    }
    if (A[i] < min) {
      min = A[i];
    }
  }
  sort(A.begin(), A.end(), greater<int>());
  A.push_back(-1);

  for (int i = 0; i < N; i++) {
    if (A[i] != A[i + 1]) {
      if (A[i] <= i + 1) {
        cout << A[i] << endl;
        return 0;
      } else if (A[i + 1] != -1 && i + 1 >= A[i + 1]) {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }
  cout << N << endl;
}
