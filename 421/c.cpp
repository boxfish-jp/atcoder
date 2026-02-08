#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> AposArray;
  for (int i = 0; i < 2 * N; i++) {
    if (S[i] == 'A') {
      AposArray.push_back(i);
    }
  }

  long long ABAnswer = 0;
  long long BAAnswer = 0;
  for (int i = 0; i < N; i++) {
    int ABpos = i * 2;
    int BApos = i * 2 + 1;
    ABAnswer += abs(AposArray[i] - ABpos);
    BAAnswer += abs(AposArray[i] - BApos);
  }

  cout << min(ABAnswer, BAAnswer) << endl;
}
