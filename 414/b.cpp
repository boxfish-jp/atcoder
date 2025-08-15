#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string answer = "";
  for (int i = 0; i < n; i++) {
    string c;
    int l;
    cin >> c >> l;

    for (int j = 0; j < l; j++) {
      answer += c;
      if (answer.size() > 100) {
        cout << "Too Long" << endl;
        return 0;
      }
    }
  }
  cout << answer << endl;
}
