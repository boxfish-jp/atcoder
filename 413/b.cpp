#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> s;
  for (int i = 0; i < n; i++) {
    string si;
    cin >> si;
    s.push_back(si);
  }

  set<string> results;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      string result = s[i] + s[j];
      results.insert(result);
    }
  }
  cout << results.size() << endl;
}
