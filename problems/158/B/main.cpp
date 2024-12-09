#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

void solve() {
  int n; cin >> n;
  int qtdCar = 0;

  vi groups(n);

  for (auto& group:groups) {
    int g; cin >> g;
    group = g;
  }

  sort(all(groups), greater<>());

  int com1Vaga = 0;
  int com2Vaga = 0;
  int com3Vaga = 0;
  for (auto group:groups) {
    if (group == 4) {
      qtdCar++;
      continue;
    }

    if (group == 3) {
      if (com3Vaga) {
        com3Vaga--;
        continue;
      }
      qtdCar++;
      com1Vaga++;
      continue;
    }

    if (group == 2) {
      if (com3Vaga) {
        com3Vaga--;
        com1Vaga++;
        continue;
      }
      if (com2Vaga) {
        com2Vaga--;
        continue;
      }
      qtdCar++;
      com2Vaga++;
      continue;
    }

    if (group == 1) {
      if (com3Vaga) {
        com3Vaga--;
        com2Vaga++;
        continue;
      }
      if (com2Vaga) {
        com2Vaga--;
        com1Vaga++;
        continue;
      }
      if (com1Vaga) {
        com1Vaga--;
        continue;
      }
      qtdCar++;
      com3Vaga++;
    }
  }

  cout << qtdCar
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

