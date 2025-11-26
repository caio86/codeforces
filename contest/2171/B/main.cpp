#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long
#define all(x) x.begin(), x.end()

const int MAX = 2e6+10;
int n;

ll getB(vector<ll> &a) {
  ll b = 0;

  for (int i = 0; i < n-1; i++) {
    b += a[i+1] - a[i];
  }

  return b;
}

void solve() {
  cin >> n;

  vector<ll> arr(n);
  deque<int> pos;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == -1) {
      pos.push_back(i);
      arr[i] = 0;
    }
  }

  auto b = getB(arr);

  if (pos.size() > 0) {
    int ie = pos.back();
    int is = pos.front();


    if (ie == n-1) {
      arr[ie] = -b;
    } else if (is == 0) {
      arr[is] = b;
    }
  }


  cout << abs(getB(arr)) << endl;
  for (auto x : arr)
    cout << x << " ";
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

