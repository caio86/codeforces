#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define pn cout << "NO\n"
#define py cout << "YES\n"

void solve() {
  int n, x; cin >> n >> x;

  bool arr[n];
  bool apertou = false;
  int pri = -1;
  int ult = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    if (pri == -1 and arr[i])
      pri = i;

    if (arr[i])
      ult = i;
  }

  int tam = ult - pri + 1;

  if (x >= tam)
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

