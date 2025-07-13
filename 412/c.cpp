#include <bits/stdc++.h>
using namespace std;

int main() {
  int testLength;
  cin >> testLength;
  vector<int> result;
  for (int i = 0; i < testLength; i++) {
    int arrayLength;
    cin >> arrayLength;
    vector<int> inputArray(arrayLength - 1);
    for (int i = 0; i < arrayLength; i++) {
      cin >> inputArray[i];
    }
    int startDomino = inputArray[0];
    int goalDomino = inputArray[arrayLength - 1];
    sort(inputArray.begin(), inputArray.end());
    vector<int> sortedArray;
    sortedArray.push_back(startDomino);
    for (int i = 1; i < arrayLength - 1; i++) {
      if (startDomino < inputArray[i] && inputArray[i] < goalDomino) {
        sortedArray.push_back(inputArray[i]);
      }
    }
    sortedArray.push_back(goalDomino);

    int dominoCounter = 1;
    int pickedDomino = sortedArray[0];
    for (int i = 0; i < sortedArray.size() - 1; i++) {
      if (sortedArray[i + 1] > pickedDomino * 2) {
        if (sortedArray[i] * 2 < sortedArray[i + 1]) {
          dominoCounter = -1;
          break;
        }
        pickedDomino = sortedArray[i];
        dominoCounter++;
      }
    }
    if (pickedDomino * 2 < goalDomino) {
      dominoCounter = -1;
    } else {
      dominoCounter++;
    }
    result.push_back(dominoCounter);
  }

  for (int res : result) {
    cout << res << endl;
  }
}
