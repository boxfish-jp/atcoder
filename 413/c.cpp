#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  long long start = 0;
  struct Ai {
    long long id;
    long long num;
    long long startIndex;
    long long endIndex;
  };
  vector<Ai> a;
  long long nowId = 0;
  long long beforeEnd = -1;
  for (int i = 0; i < q; i++) {
    int pattern;
    cin >> pattern;
    switch (pattern) {
    case 1:
      long long c, x;
      cin >> c >> x;
      a.push_back({nowId, x, beforeEnd + 1, beforeEnd + c});
      beforeEnd += c;
      nowId++;
      break;

    case 2:
      long long k;
      cin >> k;
      Ai startAi = {-1, -1, -1, -1};
      Ai endAi = {-1, -1, -1, -1};
      for (auto ai : a) {
        if ((ai.startIndex <= start) && (start <= ai.endIndex)) {
          startAi = ai;
        }
        if ((ai.startIndex <= (start + k - 1)) &&
            ((start + k) <= ai.endIndex)) {
          endAi = ai;
        }
      }
      // cout << "startIndex:" << startAi.num << "endIndex:" << endAi.num <<
      // endl;

      long long out = 0;
      for (int j = startAi.id; j <= endAi.id; j++) {
        auto ai = a[j];
        int startIndex = start < ai.startIndex ? ai.startIndex : start;
        int endIndex =
            (start + k - 1) < ai.endIndex ? (start + k) : ai.endIndex + 1;
        out += ai.num * (endIndex - startIndex);
      }
      cout << out << endl;
      start += k;
      // cout << "newStart:" << start << endl;
      break;
    }
  }
}
