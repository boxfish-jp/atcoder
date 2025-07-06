#include <bits/stdc++.h>
using namespace std;

int main() {
  int cellLength;
  cin >> cellLength;
  vector<bool> cells(cellLength, false);

  int queryLength;
  cin >> queryLength;
  vector<int> result(queryLength);
  for (int i = 0; i < queryLength; i++) {
    int query;
    cin >> query;
    cells[query - 1] = !cells[query - 1];

    int answer = 0;
    bool previous = false;
    for (bool cell : cells) {
      if (cell && !previous) {
        answer++;
      }
      previous = cell;
    }
    result[i] = answer;
  }

  for (int res : result) {
    cout << res << endl;
  }
}
