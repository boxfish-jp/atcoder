#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;
  S.erase(0, A);
  S.erase(S.size() - B, B);
  cout << S << endl;
}
