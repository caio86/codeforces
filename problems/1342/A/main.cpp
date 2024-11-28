#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int t; cin >> t;

  while (t--) {
    ll x, y; cin >> x >> y;
    ll a, b; cin >> a >> b;

    ll diff = abs(x-y);
    ll res1 = diff * a + ( max(x, y) - diff ) * b;
    ll res2 = (x+y) * a;

    cout << min({res1, res2})
      << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

