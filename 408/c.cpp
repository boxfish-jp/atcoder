#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> shilds(N);

  for (int i = 0; i < M; i++) {
    int li, ri;
    cin >> li >> ri;
    for (int index = li - 1; index < ri; index++) {
      shilds[index]++;
    }
  }

  int min = shilds[0];
  for (auto shild : shilds) {
    if (shild < min) {
      min = shild;
    }
  }
  cout << min << endl;
}
