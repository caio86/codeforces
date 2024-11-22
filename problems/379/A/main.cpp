#include <bits/stdc++.h>
using namespace std;


void solve() {
  int a, b; cin >> a >> b;

  int horas = 0;
  int velasApagadas = 0;
  int velasRestantes = a;

  auto debug = [&](){
    return;
    cout << velasRestantes
      << "\n";
  };

  while (true) {
    debug();
    if (velasRestantes <= 0) {
      cout << horas
        << "\n";
      return;
    }
    horas++;
    velasRestantes--;
    velasApagadas++;

    if (velasApagadas >= b) {
      velasApagadas -= b;
      velasRestantes++;
    }
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

