#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  int maiorSeq = 1;
  int seqAtual = 1;
  int numAnterior; cin >> numAnterior;
  int numAtual;

  while (--n) {
    cin >> numAtual;

    if (numAtual >= numAnterior)
      seqAtual++;
    else
      seqAtual = 1;

    if (seqAtual > maiorSeq)
      maiorSeq = seqAtual;

    numAnterior = numAtual;
  }

  cout << maiorSeq
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

