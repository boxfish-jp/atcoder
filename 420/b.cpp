#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, N;
  cin >> N >> M;
  vector<string> votes;
  int max = 0;

  for (int i = 0; i < N; i++) {
    string input;
    cin >> input;
    votes.push_back(input);
  }

  vector<int> results(N, 0);
  for (int i = 0; i < M; i++) {
    vector<int> x;
    vector<int> y;
    for (int j = 0; j < N; j++) {
      if (votes[j][i] == '0') {
        x.push_back(j);
      } else {
        y.push_back(j);
      }
    }

    vector<int> gets;
    if (x.size() == 0 || y.size() == 0) {
      x.insert(x.end(), y.begin(), y.end());
      gets = x;
    } else if (x.size() < y.size()) {
      gets = x;
    } else {
      gets = y;
    }

    for (auto j : gets) {
      results[j]++;
      if (results[j] > max) {
        max = results[j];
      }
    }
  }

  for (int j = 0; j < N; j++) {
    if (max == results[j]) {
      cout << j + 1 << " ";
    }
  }
  cout << endl;
}
