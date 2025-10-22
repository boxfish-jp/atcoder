#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<set<int>> users(N + 1, set<int>());

  for (int i = 0; i < Q; i++) {
    int queryType;
    cin >> queryType;

    switch (queryType) {
    case 1:
      int X1, Y1;
      cin >> X1 >> Y1;
      users[X1].insert(Y1);
      break;
    case 2:
      int X2;
      cin >> X2;
      users[X2].insert(0);
      break;
    case 3:
      int X3, Y3;
      cin >> X3 >> Y3;
      if ((users[X3].find(0) != users[X3].end()) ||
          (users[X3].find(Y3) != users[X3].end())) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
      break;
    }
  }
}
