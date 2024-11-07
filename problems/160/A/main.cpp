#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n; cin >> n;

  vi moedas(n);

  int soma = 0;
  for (auto& moeda : moedas) {
    cin >> moeda;
    soma += moeda;
  }

  sort(moedas.begin(), moedas.end());

  vi::iterator it = moedas.end();
  int alvo = soma / 2;
  int qtd = 0; soma = 0;
  while (soma <= alvo) {
    soma += *--it;
    qtd++;
  }

  cout << qtd
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

