#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A;
  long long sumA = 0;
  for (int i = 0; i < N; i++) {
    int ai;
    cin >> ai;
    A.push_back(ai);
    sumA += ai;
  }

  sort(A.begin(), A.end(), greater<>());

  int i = N - 1;
  int current = 1;
  map<int, int> answers;
  long long sum = 1;
  while (i >= 0) {
    while (current <= A[i]) {
      // answers.insert(current + 1, i + 2);
      int lineHeight = i + 1;
      sum += lineHeight;
      // cout << current << " " << lineHeight << " " << sum << endl;
      answers.insert({current + 1, sum});
      current++;
    }
    i--;
  }
  answers.insert({1, 1});
  answers.erase(A[0] + 1);

  /*
  for (int i = 1; i <= A[0] + 1; i++) {
    cout << answers[i] << endl;
  }
  */

  for (int i = 0; i < Q; i++) {
    int bi;
    cin >> bi;
    int answer = answers[bi];
    answer = (answer == 0 || sumA < answer) ? -1 : answer;
    cout << answer << endl;
  }
}
