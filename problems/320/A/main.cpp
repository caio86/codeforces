#include <bits/stdc++.h>
using namespace std;

bool ehMagico(string& number) {

  while (number.length()) {
    // Check 144
    if (number.substr(0, 3) == "144") {
      // cout << "é sim 144\n";
      number.erase(0, 3);
    }

    // Check 14
    else if (number.substr(0, 2) == "14") {
      // cout << "é sim 14\n";
      number.erase(0, 2);
    }

    // Check 1
    else if (number.substr(0, 1) == "1") {
      // cout << "é sim 1\n";
      number.erase(0, 1);
    } else {
      return false;
    }
  }

  return true;
}

void solve() {
  string s; cin >> s;

  if (ehMagico(s)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

