#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a;
  vector<int> counter(m, 0);
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    ai--;
    a.push_back(ai);
    counter[ai]++;
  }
  for (auto c : counter) {
    if (c == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  int answer = 1;
  for (int last = n - 1; 0 <= last; last--) {
    counter[a[last]]--;
    if (counter[a[last]] == 0) {
      cout << answer << endl;
      return 0;
    }
    answer++;
  }
}
