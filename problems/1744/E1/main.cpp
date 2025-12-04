#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

#define mod (ll)( 1e10 );

void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll ab = a * b;

  for (ll x = a+1; x <= c; x++) {
    ll y1 = ab / gcd(x, ab);

    if (b >= y1)
      y1 = b + y1 - b % y1;
    for (ll y = y1; y <= d; y+=y1) {

      if (x*y % ab == 0) {
        cout << x << " " << y << '\n';
        return;
      }
    }
  }

  cout << "-1 -1\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

