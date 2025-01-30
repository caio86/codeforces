#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    int k; cin >> k;

    if (k < n) {
      cout << k << endl;
      continue;
    }

    if (k == n) {
      cout << k+1 << endl;
      continue;
    }

    int start = ( k + (n-1)-1 )/ (n-1);

    int diff = ( n-1 ) * start - k;

    int res = n * start - 1 - diff;

    D(start);

    cout << res << endl;

  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

