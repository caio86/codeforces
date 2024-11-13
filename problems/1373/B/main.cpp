#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t; cin >> t;

  while (t--) {
    string s; cin >> s;
    bool canWin = false;

    string::iterator it1 = s.begin();
    string::iterator it2 = s.begin() + 1;

    while (it2 < s.end()) {

      // cout << *it1
      //   << " " << *it2
      //   << "\n";

      if (*it1 != *it2) {
        int dis = distance(s.begin(), it1);
        // cout << "Apagou"
        //   << "\n";
        s.erase(dis, 2);
        canWin = !canWin;

        if (it1 != s.begin()) {
          it1--; it2--;
        }

        // cout << distance(it1, it2)
        //   << " " << *it1
        //   << " " << *it2
        //   << endl;

        continue;
      }
      it1++; it2++;
    }

    if (canWin)
      cout << "DA\n";
    else
      cout << "NET\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

