#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;
  int teste[n*2+1];
  bool vis[n*2];
  fill_n(vis, n*2, 0);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int cell; cin >> cell;
      teste[i+j] = cell;
      vis[cell-1] = true;
      // cerr << i << ":" << j << "=" << cell << "/" << i+j << endl;
    }
  }

  int falta = distance(vis, find(vis, vis+n*2, 0))+1;
  teste[1] = falta;

  for (int i = 1; i <= n*2; i++) {
    cout << teste[i] << " ";
  }
  cout << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

