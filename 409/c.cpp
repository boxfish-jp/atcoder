#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  vector<int> positions;
  int tempPos = 0;
  positions.push_back(0);
  for (int i = 0; i < N - 1; i++) {
    int di;
    cin >> di;
    tempPos = (di + tempPos) % L;
    positions.push_back(tempPos);
  }

  // cout << "datums";
  vector<int> datums;
  for (auto pos : positions) {
    if (L / 3 > pos) {
      //  cout << " " << pos;
      datums.push_back(pos);
    }
  }
  // cout << endl;

  long long answer = 0;
  if (L % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  for (auto datum : datums) {
    tempPos = datum;
    // cout << datum;
    int checker = 0;
    int beforSelects = 0;
    int afterSelects = 0;
    tempPos += L / 3;
    bool isExist = false;
    for (auto pos : positions) {
      if (pos == tempPos) {
        //   cout << " pos:" << pos;
        isExist = true;
        beforSelects++;
      }
    }
    if (!isExist) {
      continue;
    }
    tempPos += L / 3;
    for (auto pos : positions) {
      if (pos == tempPos) {
        //   cout << " pos:" << pos;
        afterSelects++;
      }
    }
    /*
    cout << endl;
    cout << beforSelects << " after" << afterSelects << " "
         << beforSelects * afterSelects << endl;
    */
    answer += (beforSelects * afterSelects);
  }
  // cout << endl;
  cout << answer << endl;
}
