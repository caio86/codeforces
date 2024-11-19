#include <bits/stdc++.h>
using namespace std;

typedef map<string, int> msi;

void solve() {
  int n; cin >> n;

  int maior = 0;
  string ganhou;
  msi gols;

  while (n--) {
    string s; cin >> s;

    int atual = ++gols[s];
    if (atual > maior) {
      maior = atual;
      ganhou = s;
    }
  }

  cout << ganhou
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

