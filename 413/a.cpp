#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    sum += a;
    if (sum > m) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
