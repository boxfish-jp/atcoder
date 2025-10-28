#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A;
  vector<long long> jAjArray;
  vector<long long> AiiArray;
  long long maxAi = 0;
  for (long long i = 0; i < N; i++) {
    long long ai;
    cin >> ai;
    long long jAj = i - ai;
    long long Aii = ai + i;
    jAjArray.push_back(jAj);
    AiiArray.push_back(Aii);
    if (maxAi < max(jAj, Aii)) {
      maxAi = max(jAj, Aii);
    }
  }
  vector<long long> jAjCountArray(maxAi, 0);
  vector<long long> AiiCountArray(maxAi, 0);
  for (long long i = 0; i < N; i++) {
    if (jAjArray[i] > 0) {
      jAjCountArray[jAjArray[i] - 1]++;
    }
    AiiCountArray[AiiArray[i] - 1]++;
  }
  long long answer = 0;
  for (long long i = 0; i < maxAi; i++) {
    answer += jAjCountArray[i] * AiiCountArray[i];
  }
  cout << answer << endl;
}
