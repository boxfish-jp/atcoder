#include <bits/stdc++.h>
using namespace std;

int searchMin(vector<int> array) {
  int index = 0;
  for (int i = 0; i < array.size(); i++) {
    if (array[i] < array[index]) {
      index = i;
    }
  }
  return index;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> b(q);
  vector<int> counts(n, 0);
  for (int t = 0; t < q; t++) {
    int inst;
    cin >> inst;
    if (inst == 0) {
      int minIndex = searchMin(counts);
      counts[minIndex] += 1;
      b[t] = minIndex + 1;
    } else {
      counts[inst - 1] += 1;
      b[t] = inst;
    }
  }
  for (auto bi : b) {
    cout << bi << " ";
  }
  cout << endl;
}
