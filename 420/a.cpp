#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int result = (X + Y) % 12;
  int answer = result ? result : 12;
  cout << answer << endl;
}
