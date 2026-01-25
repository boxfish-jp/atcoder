#include <bits/stdc++.h>
#include <string>
using namespace std;

int f(int number) {
  string stringNum = to_string(number);
  int sum = 0;
  for (auto s : stringNum) {
    sum += s - '0';
  }
  return sum;
}

int calcA(int i) {
  if (i == 0 || i == 1) {
    return 1;
  } else if (i > 0) {
    int a = calcA(i - 1);
    return a + f(a);
  } else {
    cout << "invalid value" << endl;
    return -1;
  }
}

int main() {
  int N;
  cin >> N;
  cout << calcA(N) << endl;
}
