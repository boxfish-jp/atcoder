#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  double Adouble = double(A);
  double Bdoubled = double(B);

  int intWaru = A / B;
  double doubleWaru = Adouble / Bdoubled;
  int answer =
      (intWaru + 1) - doubleWaru < doubleWaru - intWaru ? intWaru + 1 : intWaru;
  cout << answer << endl;
}
