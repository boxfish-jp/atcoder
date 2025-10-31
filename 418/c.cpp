#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
using namespace std;

struct BData {
  int id;
  int value;
  int answer;
};

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A;
  for (int i = 0; i < N; i++) {
    int ai;
    cin >> ai;
    A.push_back(ai);
  }

  sort(A.begin(), A.end(), greater<>());

  vector<BData> B;
  for (int i = 0; i < Q; i++) {
    int bi;
    cin >> bi;
    B.push_back({i, bi, -1});
  }

  sort(B.begin(), B.end(),
       [](const BData &a, const BData &b) { return a.value < b.value; });

  /*
  for (auto a : A) {
    cout << a;
  }
  cout << endl;
  */

  int counter = 0;
  int step = 1;
  int nextBIndex = 0;
  bool end = false;
  for (int x = 0; x < A.size(); x++) {
    counter++;
    if (A[x] == 0) {
      break;
    }
    //   cout << counter << " " << step << " " << x << endl;

    while (step == B[nextBIndex].value) {
      B[nextBIndex].answer = counter;
      nextBIndex++;
      if (B.size() == nextBIndex) {
        end = true;
        break;
      }
    }
    if (end) {
      break;
    }
    A[x]--;
    if (x + 1 >= A.size() || A[x + 1] == 0) {
      step++;
      x = -1;
    }
  }

  sort(B.begin(), B.end(),
       [](const BData &a, const BData &b) { return a.id < b.id; });
  for (auto b : B) {
    cout << b.answer << endl;
  }

  /*
  for (auto a : A) {
    cout << a;
  }
  cout << endl;
  */
}
