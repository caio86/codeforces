#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;

  if (s.find_first_of("HQ9") != string::npos)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

