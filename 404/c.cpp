#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> n >> m;
  vector<vector<int>> g(n + 1, vector<int>());
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  int counter = 1;
  int currentNode = 1;
  int previousNode = 1;
  while (true) {
    if (g[currentNode].size() == 2) {
      if (g[currentNode][0] == previousNode) {
        previousNode = currentNode;
        currentNode = g[currentNode][1];
      } else {
        previousNode = currentNode;
        currentNode = g[currentNode][0];
      }
      if (currentNode == 1 || counter > n) {
        break;
      }
      counter++;
    } else {
      break;
    }
  }
  if (counter == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
