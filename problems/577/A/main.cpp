#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void _calculate(ll n, ll x, ll& qtd) {
  for (ll i = 1; i <= n; i++) {
    for (ll j = i; j <= n; j++) {
      ll got = i * j;

      if (got == x) {
        qtd++;
        break;
      }
    }
  }
}

void calculate(ll n, ll x, ll& qtd) {
  for (ll i = 1; i <= n; i++) {
    if (x % i == 0 && x/i <= n) {
      qtd++;
      // cout << "sim\n";
    }
  }
}

void solve() {
  ll n, x, qtd = 0; cin >> n >> x;

  if (x == 1) {
    cout << "1\n";
    return;
  }

  calculate(n,x,qtd);

  cout << qtd
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

