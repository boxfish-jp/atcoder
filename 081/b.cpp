#include <bits/stdc++.h>
using namespace std;

int main() {
  int arrayLen;
  cin >> arrayLen;
  vector<int> array(arrayLen);
  for (int i = 0; i < arrayLen; i++) {
    cin >> array[i];
  }

  int answer = 0;
  while (true) {
    for (auto a : array) {
      if (a % 2 != 0) {
        cout << answer << endl;
        return 0;
      }
    }
    for (int i = 0; i < arrayLen; i++) {
      array[i] = array[i] / 2;
    }
    answer++;
  }

  return 0;
}
