#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n, k; cin >> n >> k;

  int ans;
  if (n % 2 == 0) {
    ans = k % n;
    if (ans == 0)
      ans = n;
    cout << ans << '\n';
    return;
  }

  // cout << n/2 << " ";
  // cout << (k-1) / ( n/2 ) << " ";
  ans = (k + ((k-1) / (n/2))) % n;
  if (ans == 0)
    ans = n;
  cout << ans << '\n';
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

