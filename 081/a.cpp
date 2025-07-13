#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int answer = 0;
  for (char si : s) {
    if (si == '1') {
      answer++;
    }
  }
  cout << answer << endl;

  return 0;
}
