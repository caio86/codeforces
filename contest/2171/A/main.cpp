#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  int ans = 0;
  for (int i = 0; i <= n/2; i++) {
    if (( n-2*i ) % 4 == 0)
      ans++;
  }

  // 4x = n-2y;
  // 2y + 4x = n;

  cout << ans << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}

