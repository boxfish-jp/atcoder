#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;

  cin >> N >> K;
  cin >> S;

  map<string, int> counter;
  int maxAppear = 0;
  for (auto begin = S.begin(); begin != S.end() - K + 1; begin++) {
    auto key = string(begin, begin + K);
    counter[key]++;
    maxAppear = max(maxAppear, counter[key]);
  }

  cout << maxAppear << endl;
  for (auto c : counter) {
    if (c.second == maxAppear) {
      cout << c.first << " ";
    }
  }
  cout << endl;
}
