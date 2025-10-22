#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

string makeUpside(string num) {
  string upsideNum = "";
  for (int i = num.length() - 1; i >= 0; i--) {
    upsideNum.push_back(num[i]);
  }
  return upsideNum;
}

bool isAUpside(long long a, long long num) {
  long long tempNum = num;
  string aNum = "";
  while (true) {
    long long result = tempNum / a;
    long long rest = tempNum % a;
    aNum.insert(0, 1, rest + '0');
    if (result == 0) {
      break;
    }
    tempNum = result;
  }
  string upside = makeUpside(aNum);
  return aNum == upside;
}

int main() {
  long long A;
  long long N;
  cin >> A >> N;
  long long digit = 1;
  long long tempNum = N;
  while (tempNum >= 10) {
    tempNum = tempNum / 10;
    digit++;
  }

  long long headMaskDigit = digit > 1 ? digit / 2 : digit;
  long long headMask = 1;
  for (int i = 0; i < headMaskDigit; i++) {
    headMask = headMask * 10;
  }
  long long numHeadMask = N / headMask;

  long long answer = 0;
  long long suggest = 0;
  for (long long i = 1; i < 10; i++) {
    suggest = i;
    if (suggest <= N && isAUpside(A, suggest)) {
      answer += suggest;
    }
  }
  for (long long i = 1; i <= numHeadMask; i++) {
    string num = to_string(i);
    string upsideNum = makeUpside(num);
    suggest = stoll(num + upsideNum);
    if (suggest <= N && isAUpside(A, suggest)) {
      answer += suggest;
    }
    for (int s = 0; s < 10; s++) {
      suggest = stoll(num + to_string(s) + upsideNum);
      if (suggest <= N && isAUpside(A, suggest)) {
        answer += suggest;
      }
    }
  }
  cout << answer << endl;
}
