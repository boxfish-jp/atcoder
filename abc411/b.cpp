#include <bits/stdc++.h>
using namespace std;

vector<int> calc(vector<int> arr) {
  vector<int> newArr(arr.size() - 1);
  for (int i = 1; i < arr.size(); i++)
    newArr[i - 1] = arr[i] - arr[0];
  return newArr;
}

void printArr(vector<int> arr) {
  for (int c : arr)
    cout << c << " ";
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  a[0] = 0;
  for (int i = 1; i < n; i++) {
    int t;
    cin >> t;
    a[i] += t + a[i - 1];
  }

  printArr(a);

  vector<int> tempArr;
  tempArr = a;
  for (int i = a.size(); i > 1; i--) {
    tempArr = calc(tempArr);
    printArr(tempArr);
  }
}
