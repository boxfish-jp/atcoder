#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int count = 0;
  for (int s = 1; s <= 6; s++) {
    for (int t = 1; t <= 6; t++) {
      if (s + t >= X || abs(s - t) >= Y) {
        count++;
      }
    }
  }
  cout << setprecision(11) << double(count) / double(36) << endl;
}
