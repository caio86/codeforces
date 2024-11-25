#include <bits/stdc++.h>
using namespace std;

string createNumber(int N, int T) {
  if (T == 10 && N == 1)
    return "-1";

  if (T == 10) {
    string res(N-1, '1');
    res += '0';

    return res;
  }

  string res(N, '0' + T);

  return res;
}

void solve() {
  int n, t; cin >> n >> t;

  cout << createNumber(n, t)
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
