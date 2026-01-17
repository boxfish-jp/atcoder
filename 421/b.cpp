#include <bits/stdc++.h>
using namespace std;

long long fx(long long Sx) {
  long long reverse = 0;
  while (Sx > 0) {
    reverse = (reverse * 10 + Sx % 10);
    Sx /= 10;
  }
  return reverse;
}

int main() {
  string X, Y;
  cin >> X >> Y;

  long long previous = stoi(X);
  long long next = stoi(Y);
  for (int i = 2; i < 10; i++) {
    long long result = fx(previous + next);
    previous = next;
    next = result;
  }
  cout << next << endl;
}
