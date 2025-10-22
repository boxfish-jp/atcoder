#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<vector<int>> users(N + 1, vector<int>(M + 1, 0));

  for (int i = 0; i < Q; i++) {
    int queryType;
    cin >> queryType;

    switch (queryType) {
    case 1:
      int X1, Y1;
      cin >> X1 >> Y1;
      users[X1][Y1] = 1;
      break;
    case 2:
      int X2;
      cin >> X2;
      users[X2][0] = 1;
      break;
    case 3:
      int X3, Y3;
      cin >> X3 >> Y3;
      if (users[X3][0] == 1 || users[X3][Y3] == 1) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
      break;
    }
  }
}
