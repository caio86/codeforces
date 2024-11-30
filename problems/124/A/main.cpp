#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b; cin >> n >> a >> b;

  int qtd = n-a;
  if (qtd > b) {
    qtd = b+1;
  }

  cout << qtd << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

