#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    string s; cin >> s;

    int aberto = 0;

    for (int i = 0; i < n; i++) {

      if (s[i] == '(') aberto++;
      else if (aberto!=0) aberto--;

      // cout << s[i];
      // cout << "\nDebug:"
      //   << " " << aberto
      //   << " " << fechado
      //   << "\n";
    }
    cout << aberto
      << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

