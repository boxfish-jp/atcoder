#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int minR = 1e9;
  int maxR = 1;
  int minC = 1e9;
  int maxC = 0;
  for (int i = 0; i < N; i++) {
    int Ri, Ci;
    cin >> Ri >> Ci;
    minR = min(minR, Ci);
    maxR = max(maxR, Ci);
    minC = min(minC, Ri);
    maxC = max(maxC, Ri);
  }

  int maxDistance = max(maxR - minR, maxC - minC);

  int answer = (maxDistance % 2) ? (maxDistance + 1) / 2 : maxDistance / 2;
  cout << answer << endl;
}
