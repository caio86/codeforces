#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

int mod(int a, int b) {
  int res = a % b;

  if (res < 0)
    res += b;

  if (res == 0)
    res = b;

  return res;
}

void solve() {
  int n, m, k; cin >> n >> m >> k;

  // map<int,int> mapa;

  // cout << (n*m)/k << '\n';

  if (n*m <= k) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << i*m + j+1 << ' ';
      }
      cout << '\n';
    }

    return;
  }

  // vector<vector<int>> arr(n, vector<int>(m));
  //
  // int i = 0, j = 0, c = 1;
  // bool inv = false;
  // while (true) {
  //   if (i == n)
  //     break;
  //
  //   arr[i][j] = mod(c++,k);
  //   // cout << i << " " << j << " " << n << " " << m << '\n';
  //
  //   if (!inv && j == m-1) {
  //     inv = !inv;
  //     i++;
  //     continue;
  //   } else if (inv && j == 0) {
  //     inv = !inv;
  //     i++;
  //     continue;
  //   }
  //
  //   if (!inv)
  //     j++;
  //   else
  //     j--;
  // }
  //
  // for (auto &x : arr) {
  //   for (auto y : x) {
  //     cout << y << ' ';
  //   }
  //   cout << '\n';
  // }

  if (m % k == 0) {
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < m; j++) {
          auto res = mod(i * m + j + 1, k);
          // mapa[res]++;
          cout << res << ' ';
        }
        cout << '\n';
      } else {
        for (int j = m-1; j >= 0; j--) {
          auto res = mod((i * m + j + 1)*-1, k);
          // mapa[res]++;
          cout << res << ' ';
        }
        cout << '\n';
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          auto res = mod(i * m + j + 1, k);
          // mapa[res]++;
          cout << res << ' ';
      }
      cout << '\n';
    }
  }

  // for (auto [k,v]: mapa) {
  //   cout << k << ": " << v << endl;
  // }

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     if (i % 2 == 0)
  //       cout << mod(i * m + j + 1, k) << ' ';
  //     else
  //       cout << mod(( i * m + j + 1 )*-1, k) << ' ';
  //   }
  //   cout << '\n';
  // }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

