#include <bits/stdc++.h>
using namespace std;

map<int, bool> pastcases;

bool test(const int number) {
  if (pastcases.find(number) != pastcases.end())
    return pastcases[number];

  if (number == 2020 || number == 2021)
    return true;

  if (number < 2020)
    return false;

  bool case1 = test(number - 2020);
  bool case2 = test(number - 2021);

  bool res = case1 || case2;

  pastcases[number] = res;

  return res;
}

void solve() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;

    if (test(n))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

