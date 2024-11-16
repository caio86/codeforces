#include <bits/stdc++.h>
#include <cctype>
using namespace std;

bool isWrong(string str) {
  size_t len = str.length();
  if (isupper(str[0])) {
    for (int i = 1; i < len; i++) {
      if (!isupper(str[i]))
        return false;
    }
    return true;
  } else {
    for (int i = 1; i < len; i++) {
      if (isupper(str[i])) {
        continue;
      }
      return false;
    }
    return true;
  }

  return false;
}

void solve() {
  string s; cin >> s;

  bool iswrong = isWrong(s);

  if (iswrong)
    transform(s.begin(), s.end(), s.begin(),
      [](char c) {
        if (isupper(c))
          return tolower(c);
        else
          return toupper(c);
      }
    );

  cout << s
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

