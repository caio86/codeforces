#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, m; cin >> n >> m;
  string player1("Akshat"), player2("Malvika");

  if (min(n, m) % 2 == 0)
    cout << player2
      << "\n";
  else
    cout << player1
      << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

