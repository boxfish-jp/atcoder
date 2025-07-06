#include <bits/stdc++.h>
#include <iostream>
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

    int pickedDomino = inputArray[0];

    vector<int> searchArray = inputArray;
    vector<int> pickedArray;
    pickedArray.push_back(startDomino);
    while (true) {
      if (pickedDomino * 2 >= goalDomino) {
        pickedArray.push_back(goalDomino);
        result.push_back(pickedArray.size());
        break;
      }
      int selectingIdx = -1;
      for (int i = 0; i < searchArray.size(); i++) {
        if (pickedDomino < searchArray[i] &&
            searchArray[i] <= pickedDomino * 2) {
          if (selectingIdx == -1 ||
              searchArray[selectingIdx] < searchArray[i]) {
            selectingIdx = i;
          }
        }
      }
      if (selectingIdx == -1) {
        result.push_back(-1);
        break;
      }
      pickedDomino = searchArray[selectingIdx];
      pickedArray.push_back(pickedDomino);
    }
  }

  for (int res : result) {
    cout << res << endl;
  }
}
