#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int counter = s[s.size() - 1] - '0';
  for (int i = s.size() - 2; i >= 0; i--) {
    counter += (10 + s[i] - '0' - counter % 10) % 10;
  }
  cout << counter + s.size() << endl;
}
