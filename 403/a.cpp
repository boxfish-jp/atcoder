#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int ai;
    cin >> ai;
    if (i % 2 == 1) {
      sum += ai;
    }
  }
  cout << sum << endl;
}
