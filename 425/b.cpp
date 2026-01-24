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

  set<int> rests;
  for (int i = 1; i <= 10; i++) {
    rests.insert(i);
  }

  vector<int> P(N, 0);
  for (int i = 0; i < N; i++) {
    if (A[i] == -1) {
      continue;
    }
    if (rests.find(A[i]) == rests.end()) {
      cout << "No" << endl;
      return 0;
    }
    rests.erase(A[i]);
    P[i] = A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] != -1) {
      continue;
    }
    if (rests.size() == 0) {
      cout << "No" << endl;
      return 0;
    }
    P[i] = *(rests.begin());
    rests.erase(rests.begin());
  }

  cout << "Yes" << endl;
  for (auto pi : P) {
    cout << pi << " ";
  }
  cout << endl;
}
