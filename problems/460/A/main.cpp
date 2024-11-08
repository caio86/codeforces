#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m; cin >> n >> m;

  int res = (n-1)/(m-1);

  cout << res+n
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

