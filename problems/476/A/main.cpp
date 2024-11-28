#include <bits/stdc++.h>
using namespace std;

#define INF 1e9;

typedef pair<int, int> pii;
typedef map<pii, int> mpiii;

void solve() {
  int n, m; cin >> n >> m;

  if (m > n) {
    cout << "-1\n";
    return;
  }

  int minimo = (n+1)/2;

  for (int i = minimo; i <= n; i++) {
    int num = (i+m-1)/m * m;
    if (num %m == 0) {
      cout << num
        << "\n";
      return;
    }
  }

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

