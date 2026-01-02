#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  vector<int> bag;

  for (int i = 0; i < Q; i++) {
    int type;
    cin >> type;
    switch (type) {
    case 1:
      int x;
      cin >> x;
      bag.push_back(x);
      break;
    case 2:
      auto answer = bag.begin();
      for (auto ball = bag.begin(); ball != bag.end(); ball++) {
        if (*ball < *answer) {
          answer = ball;
        }
      }

      cout << *answer << endl;
      bag.erase(answer);
      break;
    }
  }
}
