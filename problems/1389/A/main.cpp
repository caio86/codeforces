#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

void solve() {
  ll l, r;
  cin >> l >> r;

  ll x = l;
  ll y = l*2;

  ll mmc = lcm(x,y);

  if (y > r || mmc > r) {
    cout << "-1 -1\n";
    return;
  }

  cout << x << " " << y << '\n';
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}

