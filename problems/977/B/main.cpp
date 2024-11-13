#include <bits/stdc++.h>
using namespace std;

typedef map<string, int> msi;

void solve() {
  int n; cin >> n;
  string s, res; cin >> s;

  string::iterator it1 = s.begin();
  string::iterator it2 = s.begin() +1;

  msi contagem;

  string maxKey;
  int maxValue = INT_MIN;

  while(it2 != s.end()) {
    res += *it1++;
    res += *it2++;

    int current = ++contagem[res];

    if (current > maxValue) {
      maxValue = current;
      maxKey = res;
    }

    res = "";
  }

  cout << maxKey
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

