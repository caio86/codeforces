#include <bits/stdc++.h>
using namespace std;

typedef vector<pair<int, int>> vpii;

void solve() {
  int s, n; cin >> s >> n;

  vpii dragons(n);

  for (auto& [dragon, bonus] : dragons) {
    cin >> dragon >> bonus;
  }

  sort(dragons.begin(), dragons.end());

  for (auto [ dragon, bonus ] : dragons) {
    // cout << "Dragon strength: "
    //   << dragon
    //   << "\n"
    //   << "My strength: "
    //   << s
    //   << '\n';

    if (dragon >= s) {
      cout << "NO\n";
      return;
    }

    s += bonus;
  }

  cout << "YES\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

