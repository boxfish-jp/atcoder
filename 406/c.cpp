#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p;
  vector<int> pc;
  for (int i = 0; i < n; i++) {
    int pi;
    cin >> pi;
    p.push_back(pi);
    if (0 < i) {
      int pci = p[i - 1] > p[i] ? -1 : 1;
      pc.push_back(pci);
    }
  }

  bool wasUp = false;
  long long answer = 0;
  bool wasChilda = false;
  long long lStream = 1;
  long long rStream = 1;
  for (int i = 0; i < pc.size() - 1; i++) {
    int l = pc[i];
    int r = pc[i + 1];
    if (l == -1 && r == -1) {
    } else if (l == -1 && r == 1) {
      // 谷のとき
      if (wasUp) {
        // チルダのとき
        wasUp = false;
        wasChilda = true;
      }
    } else if (l == 1 && r == -1) {
      // 山のとき
      wasUp = true;
      if (wasChilda) {
        // チルダがあったとき
        answer += (lStream * rStream);
        lStream = rStream;
        rStream = 1;
        wasChilda = false;
      }
    } else if (l == 1 && r == 1) {
      if (!wasChilda) {
        lStream++;
      } else {
        rStream++;
      }
    }
  }
  // 集計漏れを追加
  if (wasChilda) {
    answer += (lStream * rStream);
  }

  cout << answer << endl;
}
