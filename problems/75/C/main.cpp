#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long
#define all(x) x.begin(), x.end()

vector<ll> divi;

ll bb(ll low, ll high, ll want) {
  ll l = 0;
  ll r = divi.size();

  auto is_inside = [&](ll n){
    return n <= high && n >= low;
  };

  ll m;

  ll ans = -1;

  while (l<r) {
    m = l + (r-l)/2;
    // cout << "*** m=" << m << endl;

    if (is_inside(divi[m]))
      ans = max(divi[m], ans);

    if (want < divi[m] || divi[m] >= high) {
      r = m;
    } else {
      l = m+1;
    }
  }

  return ans;
}

void get_divisores(ll a, ll b) {
  set<ll> divisores;

  auto is_divisor = [&](ll n){
    return ( a % n == 0 ) && ( b % n == 0 );
  };

  for (ll i = 1; i * i <= max(a, b); i+=1) {
    // cout << i << ": " << a % i << "/" << b % i << " ";
    // cout << a%i << "/" << b%i << endl;
    if (is_divisor(i)) {
      divisores.insert(i);
    }

    if (is_divisor(a/i))
      divisores.insert(a/i);
    if (is_divisor(b/i))
      divisores.insert(b/i);
  }

  divi.assign(all(divisores));
}

// U+1F62D
void solve() {
  ll a, b; cin >> a >> b;
  // cout << a << ":" << b << endl;

  get_divisores(a, b);

  // for (auto x : divi) {
  //   cout << x << endl;
  // }
  // cout << endl;

  ll want = gcd(a,b);

  int q; cin >> q;
  while (q--) {
    ll l, r; cin >> l >> r;
    cout << bb(l, r, want) << '\n';
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

