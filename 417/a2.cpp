#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;
  auto start = S.begin();
  auto end = S.end();
  advance(start, A);
  advance(end, -1 * B);
  cout << string(start, end) << endl;
}
