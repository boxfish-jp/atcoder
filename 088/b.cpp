#include <bits/stdc++.h>
using namespace std;

int main() {
  int inputsLength;
  cin >> inputsLength;
  vector<int> inputs(inputsLength);
  for (int i = 0; i < inputsLength; i++) {
    cin >> inputs[i];
  }
  sort(inputs.begin(), inputs.end(), greater<int>());
  int sumAlice = 0;
  int sumBob = 0;
  for (int i = 0; i < inputsLength; i++) {
    if (i % 2 == 0) {
      sumAlice += inputs[i];
    } else {
      sumBob += inputs[i];
    }
  }

  cout << sumAlice - sumBob << endl;
}
