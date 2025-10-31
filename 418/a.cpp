#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  auto start = S.end();
  advance(start, -3);
  if (string(start, S.end()) == "tea") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
