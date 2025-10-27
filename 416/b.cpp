#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool wasPrevious = true;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '.' && wasPrevious) {
      S[i] = 'o';
      wasPrevious = false;
    } else if (S[i] == '#') {
      wasPrevious = true;
    }
  }
  cout << S << endl;
}
