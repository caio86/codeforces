#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n, k; cin >> n >> k;

  // 1 = chuva
  // 0 = sem chuva
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // cout << "--- " << n << " " << k;
  // cout << " --- ";
  // for (int i = 0; i < n; i++)
  //   cout << arr[i] << " ";
  // cout << endl;

  int res = 0;
  int tam = 0;
  for (int i = 0; i < n; i++) {
    if (!arr[i]) {
      tam++;
    } else {
      tam = 0;
    }
    if (tam >= k) {
      res++;
      tam = -1;
    }
  }

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

