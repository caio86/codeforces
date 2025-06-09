#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  int buffer;
  map<int, bool> mapa;
  int res = 1;
  for (int i = 0; i < n; i++) {
    cin >> buffer;

    if (mapa[buffer]) {
      mapa = {{ buffer, true }};
      res++;
    } else
      mapa[buffer]=true;
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

