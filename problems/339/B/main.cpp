#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, m; cin >> n >> m;

  ll current = 1;
  ll time = 0;

  while (m--) {
    ll task; cin >> task;

    if (task == current)
      continue;

    if (task > current) {
      time += task - current;
    } else {
      time += abs(n-current) + task;
    }

    current = task;
  }

  cout << time
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

