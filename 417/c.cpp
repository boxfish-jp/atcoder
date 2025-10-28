#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A;
  for (long long i = 0; i < N; i++) {
    long long ai;
    cin >> ai;
    A.push_back(ai);
  }

  long long counter = 0;
  for (long long i = 0; i < N - 1; i++) {
    for (long long j = i; j < N; j++) {
      if (j - i == A[j] + A[i]) {
        counter++;
      }
    }
  }
  cout << counter << endl;
}
