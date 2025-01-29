#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define INF 1e9;

typedef vector<int> vi;

void solve() {
  int n; cin >> n;
  int k; cin >> k;

  vi planks(n);

  vi psa(n);

  vi sums(n - (k-1));

  for (auto& p : planks) {
    cin >> p;
  }

  psa[0] = planks[0];
  for (int i = 1; i < n; i++) {
    psa[i] = planks[i] + psa[i-1];
  }

  int min = 99999999;
  int index = 0;

  for (int i = 0; i < n- (k-1); i++) {
    int l = i-1, r = i+( k-1 );

    int left = l < 0 ? 0 : psa[l];

    int res = psa[r] - left;

    if (res < min) {
      index = i+1;
      min = res;
    }

    // cout
    //   << psa[l] << " "
    //   << psa[r] << " "
    //   << psa[r] - psa[l] << endl;
  }

  cout << index << endl;

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
