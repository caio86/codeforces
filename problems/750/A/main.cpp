#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

int bb(int arr[], int n, int val) {
  int l = 0;
  int r = n;

  int m;
  while (l < r) {
    m = l + (r-l) / 2;
    // cerr << "*** " << l << " " << m << " " << r << ": " << arr[m] << '\n';

    if (arr[m] == val)
      return m+1;

    if (val < arr[m]) {
      r = m;
    } else {
      l = m+1;
    }
  }

  return l;
}

void solve() {
  int n, k; cin >> n >> k;

  int arr[n];
  for (int i = 1; i <= n; i++)
    arr[i-1] = 5 * i;

  partial_sum(arr, arr+n, arr);

  // cout << distance(arr, upper_bound(arr, arr+n, 240-k)) << '\n';
  cout << bb(arr, n, 240-k) << '\n';
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

