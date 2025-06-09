#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  vector<int> pares;
  vector<int> impares;

  for (int i = 1; i <= n; i+=2) {
    // cout << i << " ";
    impares.push_back(i);
  }
  // cout << endl;

  reverse(begin(impares), end(impares));

  for (int i = 2; i <= n; i+=2) {
    // cout << i << " ";
    pares.push_back(i);
  }
  // cout << endl;

  // cout << endl;

  for (auto x : pares) {
    cout << x << " ";
  }
  for (auto x : impares) {
    cout << x << " ";
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

