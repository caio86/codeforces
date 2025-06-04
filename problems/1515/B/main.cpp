#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  // cerr << n << "=";

  if (n % 2) {
    cout << "NO\n";
    return;
  }

  int x = sqrt(n/2);
  int y = sqrt(n);

  if ((x * x == n/2) || (y * y == n))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

