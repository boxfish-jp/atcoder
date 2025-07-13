#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int answer = 0;
  for (int i = 0; i <= N; i++) {
    int sum = 0;
    for (auto cn : to_string(i)) {
      int n = cn - '0';
      sum += n;
    }
    if (A <= sum && sum <= B) {
      answer += i;
    }
  }
  cout << answer << endl;
}
