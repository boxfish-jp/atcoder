#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int max = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] > max) {
      max = A[i];
    }
  }
  for (int check = max; 0 <= check; check--) {
    int count = 0;
    for (auto a : A) {
      if (a >= check) {
        count++;
      }
    }
    if (check <= count) {
      cout << check << endl;
      return 0;
    }
  }
}
