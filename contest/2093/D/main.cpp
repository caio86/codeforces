#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n, k; cin >> n >> k;

  int subSize = (n + k -1) / k;

  int arr[n];
  for (int i = 0; i < n; i++) {
    int n; cin >> n;
    arr[i] = n;
  }

  int minMex = 1e9;
  int mex = 0;

  int tmp[subSize];
  fill_n(tmp, subSize, 0);

  for (int i = 0; i < n; i++) {
    size_t subI = i % subSize;
    tmp[subI] = arr[i];

    if ((i+1) % subSize == 0) {
      if (mex < minMex)
        minMex = mex;
      mex = 0;
      fill_n(tmp, subSize, 0);
    }
  }
  cout << minMex << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

