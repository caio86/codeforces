#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, m; cin >> n >> m;

  vi tvs(n);
  for (auto& tv : tvs)
    cin >> tv;

  sort(all(tvs));

  int soma = 0;
  int qtd = 0;
  for (auto& tv : tvs) {
    if (qtd >= m)
      break;

    if (tv < 0) {
      soma += abs(tv);
      qtd++;
    }
  }

  cout << soma
    << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

