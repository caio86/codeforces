#include <bits/stdc++.h>
using namespace std;

void solve() {
  string palavra; cin >> palavra;
  string correta = "hello";

  string::iterator it = correta.begin();

  for ( auto& letra : palavra) {
    if (letra == *it) {
      it++;
    }

    if (it >= correta.end())
      break;
  }

  if (it >= correta.end()) {
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

