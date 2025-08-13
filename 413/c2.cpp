#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  queue<pair<long long, long long>> a;
  for (int i = 0; i < q; i++) {
    int pattern;
    cin >> pattern;
    if (pattern == 1) {
      long long c, x;
      cin >> c >> x;
      a.emplace(c, x);
    } else {
      long long k;
      cin >> k;
      long long answer = 0;
      while (a.size() && a.front().first <= k) {
        answer += a.front().first * a.front().second;
        k -= a.front().first;
        a.pop();
      }
      if (k != -1) {
        answer += k * a.front().second;
        a.front().first -= k;
      }
      cout << answer << endl;
    }
  }
}
