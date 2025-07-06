#include <bits/stdc++.h>
using namespace std;

int main() {
  int dayLength;
  cin >> dayLength;

  int answer = 0;
  for (int i = 0; i < dayLength; i++) {
    int goal;
    int result;

    cin >> goal;
    cin >> result;

    if (goal < result) {
      answer++;
    }
  }

  cout << answer << endl;
}
