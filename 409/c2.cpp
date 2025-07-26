#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  vector<long long> circle(L, 0);
  int tempPos = 0;
  circle[0]++;
  for (int i = 0; i < N - 1; i++) {
    int di;
    cin >> di;
    tempPos = (di + tempPos) % L;
    circle[tempPos]++;
  }

  if (L % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  long long answer = 0;
  for (int i = 0; i < L / 3; i++) {
    answer += (circle[i] * circle[L / 3 + i] * circle[2 * L / 3 + i]);
  }
  cout << answer << endl;
}
