#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  multiset<long long> A;
  vector<long long> B;
  for (int i = 0; i < N; i++) {
    long long Ai;
    cin >> Ai;
    A.insert(Ai);
  }
  for (int i = 0; i < M; i++) {
    long long Bi;
    cin >> Bi;
    B.push_back(Bi);
  }
  for (auto b : B) {
    auto pos = A.find(b);
    if (pos != A.end()) {
      A.erase(pos);
    }
  }
  for (auto a : A) {
    cout << a << " ";
  }
  cout << endl;
}
