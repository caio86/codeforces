#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

void solve() {
  ll n; ll k;
  cin >> n; cin >> k;

  ll qtdImpar = (n % 2 == 0) ? n / 2 : n / 2 + 1;
  ll res;

  if (k > qtdImpar) {
    // par
    res = ( k - qtdImpar ) * 2;
  } else {
    // impar
    res = (k) * 2 -1;
  }

  cout << res
    << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

