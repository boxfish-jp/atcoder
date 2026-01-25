#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  multiset<char> counter;
  for (auto s : S) {
    counter.insert(s);
  }

  for (auto c = counter.begin(); c != counter.end(); c++) {
    if (counter.count(*c) == 1) {
      cout << *c << endl;
    };
  }
}
