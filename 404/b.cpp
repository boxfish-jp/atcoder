#include <bits/stdc++.h>
#include <vector>
using namespace std;

int countDiff(vector<vector<char>> s, vector<vector<char>> t) {
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s.size(); j++) {
      string w = s[i][j] != t[i][j] ? "True" : "False";

      //     cout << "i:" << i << "j;" << j << s[i][j] << t[i][j] << w << endl;
      if (s[i][j] != t[i][j]) {
        count++;
      }
    }
  }
  return count;
};

int main() {
  int n;
  cin >> n;
  vector<vector<char>> s(n, vector<char>(n, '.'));
  vector<vector<char>> t(n, vector<char>(n, '.'));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t[i][j];
    }
  }

  // 色の数の違いをカウント
  // そのまま, 90, 180, 270
  vector<vector<char>> tempS = s;
  int min = n * n + 3;
  for (int u = 0; u < 4; u++) {
    int result = countDiff(tempS, t);
    //   cout << result << endl;
    if (result + u < min) {
      min = result + u;
    }
    vector<vector<char>> beforeS = tempS;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        tempS[i][j] = beforeS[n - 1 - j][i];
      }
    }
  }
  // 一番差が小さい回転が出る。

  // 一番差が小さい回転の差の数+回転数が答え
  cout << min << endl;
}
