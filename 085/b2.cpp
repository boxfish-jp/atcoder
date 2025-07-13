#include <bits/stdc++.h>
using namespace std;

int main() {
  int inputsLength;
  cin >> inputsLength;
  set<int> inputs;
  for (int i = 0; i < inputsLength; i++) {
    int a;
    cin >> a;
    inputs.insert(a);
  }
  cout << inputs.size() << endl;
}
