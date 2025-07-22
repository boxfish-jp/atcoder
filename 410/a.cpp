#include <bits/stdc++.h>
using namespace std;

int main() {
  int len;
  cin >> len;
  vector<int> array(len);
  for (int i = 0; i < len; i++) {
    cin >> array[i];
  }
  int k;
  cin >> k;

  int answer = 0;
  for (auto race : array) {
    if (k <= race) {
      answer++;
    }
  }
  cout << answer << endl;
}
