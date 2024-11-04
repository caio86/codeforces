#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, p1, p2, p3, t1, t2;
  cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

  int power = 0, endedWork = 0;

  for (int i = 0; i < n; i++) {
    int start, end; cin >> start >> end;

    if (i != 0) {
      int passouTempo = start - endedWork;

      if (passouTempo > t2 + t1) {
        // suspenso
        power += t1 * p1; // ligado

        power += t2 * p2; // screensaver

        passouTempo -= (t2 + t1);

        power += passouTempo * p3;

      } else if (passouTempo > t1) {
        // screensaver
        power += t1 * p1; // ligado
        passouTempo -= t1;

        power += passouTempo * p2; // screensaver
      } else {
        // ligado
        power += passouTempo * p1;
      }
    }

    // ativo
    power += (end - start) * p1;

    endedWork = end;
  }

  cout << power << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

