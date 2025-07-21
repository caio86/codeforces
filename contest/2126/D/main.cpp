#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

struct cassino {
  int l;
  int r;
  int real;
};

void solve() {
  int n, k; cin >> n >> k;

  vector<cassino> cassinos;

  for (int i = 0; i < n; i ++) {
    cassino cas;
    cin >> cas.l;
    cin >> cas.r;
    cin >> cas.real;

    if (cas.real > k) {
      cassinos.emplace_back(cas);
    }
  }

  sort(cassinos.begin(), cassinos.end(), [&](cassino a, cassino b) {
    if (a.real == b.real) {
      if (a.l == b.l) {
        if (a.r < b.r)
          return true;
        else
          return false;
      }
      if (a.l < b.l)
        return true;
      else
        return false;
    }

    if (a.real > b.real)
      return false;
    else
      return true;
  });

  for (auto c : cassinos) {
    if (k >= c.l && k <= c.r && k < c.real)
      k = c.real;
    // cout << c.real << " " << c.l << " "<< c.r << endl << endl;
  }

  cout << k << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  // t= 1;
  while (t--)
    solve();
  return 0;
}

