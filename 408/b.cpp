#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> A;
  for (int i = 0; i < N; i++) {
    int ai;
    cin >> ai;
    A.insert(ai);
  }
  cout << A.size() << endl;
  for (auto a : A) {
    cout << a << " ";
  }
  cout << endl;
}
