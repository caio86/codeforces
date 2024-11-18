#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n; cin >> n;

  cout << bitset<32>(n).count()
    << "\n";

  // int binario = 1;
  // long long qtdBacterias = 1;
  //
  // while (qtdBacterias < n) {
  //   qtdBacterias = bitset<32>(0).set(++binario, true).to_ullong();
  //   // cout << "Bacterias: " << qtdBacterias
  //   //   << "\n";
  // }
  //
  // long long res;
  //
  // if ((1<<binario) == n)
  //   res = 1;
  // else if (1<<(binario-1) == n-1) {
  //   res = 2;
  // } else
  //   res = bitset<32>((1<<binario)-1).count();
  //
  // cout << res
  //   // << " " << binario
  //   // << " " << qtdBacterias
  //   << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

