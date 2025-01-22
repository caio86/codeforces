#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define all(x) (x).begin(), (x).end()

void solve() {
  int n; cin >> n;
  vector<int> arr(n);

  for (auto& num : arr) {
    cin >> num;
  }

  sort(all(arr));

  int k; cin >> k;

  while (k--) {
    int l,r; cin >> l >> r;

    auto start = distance(arr.begin(), lower_bound(all(arr), l));
    auto end = distance(arr.begin(), upper_bound(all(arr), r));
    // D(start);
    // D(end);

    cout << end - start << endl;
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
