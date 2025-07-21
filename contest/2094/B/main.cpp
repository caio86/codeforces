#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl
#else
#define D(x)
#endif

void solve() {
  int n, m, l, r; cin >> n >> m >> l >> r;

  int R = 0, L = 0;

  if (n == m) {
    cout << l << " " << r << endl;
    return;
  } else if (r == 0) {
    R = 0;
    L = -m;
  } else if (l == 0) {
    R = m;
    L = 0;
  } else {
    R = min(r, m);
    L = R - m;
  }

  cout << L << " " << R << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}

