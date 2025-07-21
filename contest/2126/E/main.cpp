#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

void solve() {
  int n; cin >> n;

  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  int s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int m = (n + 1) / 2 - 1;

  int a[n];
  copy(p, p+m+1, a);
  copy(s+m+1, s+n, a+m+1);

  // for (auto x : a) {
  //   cout << x << endl;
  // }
  // cout << endl;

  int gcdP = a[0];
  for (int i = 0; i <= m; i++) {
    gcdP = gcd(gcdP, a[i]);
  }
  int gcdS = 0;
  for (int i = m; i < n; i++) {
    gcdS = gcd(gcdS, a[i]);
  }

  // cout << ( gcdP == p[m] ) << " / ";
  // cout << ( gcdS ) << " " << s[m] << endl;

  if (gcdP == p[m] && gcdS == s[m])
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

