#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;

  bool runTurn = true;
  int time = 0;
  int distance = 0;

  while (time < X) {
    if (runTurn) {
      int runTime = min(A, X - time);
      distance += runTime * S;
      time += runTime;
      runTurn = !runTurn;
    } else {
      int stopTime = min(B, X - time);
      time += stopTime;
      runTurn = !runTurn;
    }
  }
  cout << distance << endl;
}
