#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> walls(N + 1, 0);

  for (int i = 0; i < M; i++) {
    int li, ri;
    cin >> li >> ri;
    walls[li - 1]++;
    walls[ri]--;
  }

  for (int i = 1; i < N + 1; i++) {
    walls[i] += walls[i - 1];
  }

  int answer = walls[0];
  for (int i = 0; i < N; i++) {
    if (walls[i] < answer) {
      answer = walls[i];
    }
  }
  cout << answer << endl;
}
