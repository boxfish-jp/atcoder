#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  string answer = (a > c) || (a == c && b > d) ? "Yes" : "No";
  cout << answer << endl;
}
