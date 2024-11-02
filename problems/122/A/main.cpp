#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isLuckyNumber(int number) {
  string numStr = to_string(number);
  for (char digit : numStr) {
    if (digit != '4' && digit != '7')
      return false;
  }

  return true;
}

bool isAlmostLuckyNumber(int number) {
  // 1 digit
  if (number % 4 == 0)
    return true;

  if (number % 7 == 0)
    return true;

  // 2 digit
  if (number % 44 == 0)
    return true;

  if (number % 47 == 0)
    return true;

  if (number % 74 == 0)
    return true;

  if (number % 77 == 0)
    return true;

  for (int i = 0; i < (1 << 3); i++) {
    string binaryStr = bitset<3>(i).to_string();

    for (char& ch : binaryStr) {
      ch = (ch == '0') ? '4' : '7';
    }

    ll realNumber = stoll(binaryStr);

    if (realNumber > number)
      break;

    if (number % realNumber == 0)
      return true;
  }

  return false;
}

void solve() {
  int N; cin >> N;

  if (isLuckyNumber(N)) {
    cout << "YES\n";
    return;
  }

  if (isAlmostLuckyNumber(N)) {
    cout << "YES\n";
    return;
  }

  cout << "NO\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

