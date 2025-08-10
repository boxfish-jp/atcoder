#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  long long limit = 1;
  for (int i = 0; i < k; i++) {
    limit *= 10;
  }
  limit--;
  long long answer = 1;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    if (answer > (limit / a)) {
      answer = 1;
      continue;
    }
    answer = answer * a;
  }
  cout << answer << endl;
}
