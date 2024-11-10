#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

#define all(x) (x).begin(), (x).end()

size_t find_first();

void solve() {
  int n; cin >> n;
  string s, newS; cin >> s;

  vs combinations = { "10", "01" };

  // for (const auto& comb : combinations) {
  //   size_t pos = s.find(comb);
  //   while (pos != string::npos) {
  //     s.erase(pos, comb.length());
  //     pos = s.find(comb);
  //   }
  // }

  int n1 = count(all(s), '1');
  int n0 = count(all(s), '0');

  // cout << "Numers of 1:" << n1
  //   << "\n";
  // cout << "Numers of 0:" << n0
  //   << "\n";

  int res = abs(n1 - n0);

  cout << res
    << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

