#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, x;
  cin >> r >> x;

  switch (x) {
  case 1:
    if ((1600 <= r) and (r <= 2999)) {
      cout << "Yes" << endl;
      return 0;
    }
    break;
  case 2:
    if ((1200 <= r) and (r <= 2399)) {
      cout << "Yes" << endl;
      return 0;
    }
    break;
  }
  cout << "No" << endl;
}
