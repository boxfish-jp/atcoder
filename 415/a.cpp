#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int ai;
    cin >> ai;
    A[i] = ai;
  }
  int X;
  cin >> X;
  for (int ai : A) {
    if (ai == X) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
