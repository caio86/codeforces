#include <bits/stdc++.h>
using namespace std;

void solve() {
  string entrada;
  int ultimo;
  int qtdIgual = 0;

  bool perigoso = false;

  cin >> entrada;

  for (int x : entrada) {
    string status;

    if (qtdIgual >= 7) {
      break;
    }

    if (x == ultimo) {
      status = "Igual";
      qtdIgual++;
    } else {
      status = "diferente";
      qtdIgual = 1;
    }

    ultimo = x;

    // cout << x
    //   << status
    //   << qtdIgual
    //   << endl;
  }

  if (qtdIgual >= 7) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }


}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

