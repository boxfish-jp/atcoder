#include <bits/stdc++.h>
using namespace std;

int main() {
  int cellLength;
  cin >> cellLength;
  vector<bool> cells(cellLength + 2, false);

  int queryLength;
  cin >> queryLength;
  int answer = 0;
  for (int i = 0; i < queryLength; i++) {
    int query;
    cin >> query;
    cells[query] = !cells[query];
    int prev = cells[query - 1];
    int cell = cells[query];
    int next = cells[query + 1];

    if (prev == next) {
      if (prev == cell) {
        answer--;
      } else {
        answer++;
      }
    }
    cout << answer << endl;
  }
}
