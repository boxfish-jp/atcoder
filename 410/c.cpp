#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  iota(a.begin(), a.end(), 1);
  int index = 0;
  for (int c = 0; c < q; c++) {
    int qi;
    cin >> qi;
    switch (qi) {
    case 1:
      int p1, x;
      cin >> p1 >> x;
      p1--;
      a[(p1 + index) % n] = x;
      break;
    case 2:
      int p2;
      cin >> p2;
      p2--;
      cout << a[(p2 + index) % n] << endl;
      break;
    case 3:
      int k;
      cin >> k;
      index = (index + k) % n;
      break;
    }
  }
}
