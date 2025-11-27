#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define all(x) x.begin(), x.end()

#define py cout << "YES\n"
#define pn cout << "NO\n"

#define ll long long

const int MAX = 1e7+5;
vector<ll> eh_primo(MAX+1, true);
set<ll> t_primos;

void crivo() {
  eh_primo[0] = eh_primo[1] = false;

  for (ll i = 2; i * i<= MAX; i++) {
    if (eh_primo[i]) {
      for (ll j = i * i; j <= MAX; j += i) {
        eh_primo[j] = false;
      }
    }
  }

  for (ll i = 2; i <= MAX; i++) {
    if(eh_primo[i] == 1) {
      t_primos.insert(i*i);
    }
  }
}

void solve() {
  int n; cin >> n;

  ll arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  crivo();

  for (auto x : arr) {
    if (*t_primos.lower_bound(x) == x)
      py;
    else
      pn;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

