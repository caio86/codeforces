#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

#define all(x) x.begin(), x.end()

void solve() {
  ll n, l;
  cin >> n >> l;

  vector<ll> lamps(n);
  for (int i = 0; i < n; i++) {
    cin >> lamps[i];
  }

  sort(all(lamps));

  ll ans=0;
  for (int i = 0; i < n - 1; i++) {
    ans = max(ans, abs(lamps[i] - lamps[i+1]));
  }

  double rans = (double)ans/2;
  rans = max(rans, (double)lamps[0]);
  rans = max(rans, (double)abs(l - lamps[n-1]));

  cout << fixed << setprecision(10) << rans << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

