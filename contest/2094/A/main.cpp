#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  string s;
  getline(cin, s);

  stringstream ss(s);

  string buffer, res = "";
  while (ss >> buffer) {
    res += buffer[0];
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t; cin.ignore();
  while(t--)
    solve();
  return 0;
}

