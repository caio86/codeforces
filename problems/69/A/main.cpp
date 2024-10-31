#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  int somaX = 0;
  int somaY = 0;
  int somaZ = 0;

  while (N--) {
    int x, y, z;
    cin >> x >> y >> z;
    somaX += x; somaY += y; somaZ += z;
  }

  if (somaX != 0 || somaY != 0 || somaZ != 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

