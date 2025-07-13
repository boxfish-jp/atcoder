#include <bits/stdc++.h>
using namespace std;

int main() {
  int inputsLength;
  cin >> inputsLength;
  vector<int> inputs(inputsLength);
  for (int i = 0; i < inputsLength; i++) {
    cin >> inputs[i];
  }
  int min = inputs[0];
  for (auto input : inputs) {
    if (input < min) {
      min = input;
    }
  }

  int answer = 0;
  vector<int> pushed;
  while (true) {
    int max = 0;
    for (auto input : inputs) {
      if (max < input) {
        if (find(pushed.begin(), pushed.end(), input) == pushed.end()) {
          max = input;
        }
      }
    }
    answer++;
    pushed.push_back(max);
    if (max == min) {
      break;
    }
  }
  cout << answer << endl;
}
