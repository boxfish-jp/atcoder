#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }
  long long answer = 0;

  long long jSum = 0;
  for (int j = n - 1; j > 0; j--) {
    int ai = a[j - 1];
    jSum += a[j];
    answer += jSum * ai;
  }
  cout << answer << endl;
}
