#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n";
#define pn cout << "NO\n";

void solve() {
  int n, k; cin >> n >> k;

  int buffer;
  int valorInicial;
  set<int> arr;
  for (int i = 0; i < n; i++) {
    cin >> buffer;
    if (i == k-1)
      valorInicial = buffer;
    arr.insert(buffer);
  }

  int x = 0;
  auto atual = find(begin(arr), end(arr), valorInicial);
  int i = *atual;

  atual++;

  for (auto j = atual; j != arr.end(); j++) {
    int tempoTP = x + abs(i - *j);

    // cout << "--- " << i << " - " << *it << " - " << tempoTP << endl;

    if (tempoTP > i) {
      pn;
      return;
    }

    i = *j;
    x = tempoTP;
  }

  py;
}

// Dado um vertor de "n" inteiros e uma posição inicial de "k", é possível
// percorrer os elementos sem que a diferença acumulada entres os elementos seja
// maior que a posição atual?
//
// Valor atual não reduz

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  // t= 1;
  while (t--)
    solve();
  return 0;
}

