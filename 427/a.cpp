#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  S.erase(S.begin() + ((S.size() + 1) / 2) - 1);
  cout << S << endl;
}
