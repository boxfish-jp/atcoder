#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int Asum = 0;
  set<int> Aset;
  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    Aset.insert(Ai);
    Asum += Ai;
  }

  if (Aset.find(Asum - M) != Aset.end()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
