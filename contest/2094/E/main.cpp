#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

void solve() {
  int n; cin >> n;

  ll lista[n];

  ll mai = 0;

  for (int i = 0; i < n; i++) {
    ll num; cin >> num;
    mai = max(mai, num);
    lista[i] = num;
  }

  transform(lista, lista+n, lista, [&](ll x){
    return mai ^ x;
  });

  auto res = reduce(lista, lista+n);

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

