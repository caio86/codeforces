#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

#define ll long long

bool checkPrime(ll n) {
  if (n <= 1)
    return false;

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }

  return true;
}

void solve() {
  string x; int k; cin >> x >> k;

  string res;
  for (int i = 0; i < k; i++) res += x;

  ll resLL = stoll(res);

  if (checkPrime(resLL))
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

