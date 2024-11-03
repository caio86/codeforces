#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n; cin >> n;

  vi colunas(n);

  for (auto& coluna : colunas) {
    cin >> coluna;
  }

  sort(colunas.begin(), colunas.end());

  for (auto coluna : colunas) {
    cout << coluna
      << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

