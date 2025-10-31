#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool wasPassedFirst = false;
  int countT = 0;
  int countOther = 0;
  double answer = 0.0;
  for (auto c : S) {
    if (c == 't') {
      if (!wasPassedFirst) {
        wasPassedFirst = true;
      } else {
        double rate = (double)countT / ((double)countT + (double)countOther);
        answer = answer < rate ? rate : answer;
        countT++;
      }
    } else {
      if (wasPassedFirst) {
        countOther++;
      }
    }
  }
  cout << fixed << setprecision(15) << answer << endl;
}
