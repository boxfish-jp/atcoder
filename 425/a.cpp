#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int answer = 0;
  for (int i = 1; i <= N; i++) {
    int prev = 1;
    for (int j = 0; j < i; j++) {
      prev *= -1;
    }
    int next = 1;
    for (int j = 0; j < 3; j++) {
      next *= i;
    }
    answer += (prev * next);
  }
  cout << answer << endl;
}
