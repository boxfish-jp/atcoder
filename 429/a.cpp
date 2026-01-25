#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    if (i <= M) {
      cout << "OK" << endl;
    } else {
      cout << "Too Many Requests" << endl;
    }
  }
}
