#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int beforeT{0}, beforeX{0}, beforeY{0};
  for (int n = 0; n < N; n++) {
    int t, x, y;
    cin >> t >> x >> y;
    int nowT = t - beforeT;
    int nowX = abs(x - beforeX);
    int nowY = abs(y - beforeY);
    if (!((nowX + nowY) <= nowT && (nowT - (nowX + nowY)) % 2 == 0)) {
      cout << "No" << endl;
      return 0;
    }
    beforeT = t;
    beforeX = x;
    beforeY = y;
  }
  cout << "Yes" << endl;
}
