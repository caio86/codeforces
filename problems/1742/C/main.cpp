#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vi;

char checkRows(const vi& matrix) {
    for (int i = 0; i < 8; i++) {
      string atual = matrix[i];

      if (atual == "RRRRRRRR")
        return 'R';
    }

    return false;
};

void solve() {
  int tc; cin >> tc;

  while (tc--) {
    vi matrix(8);

    for (int i = 0; i < 8; i++) {
      string str; cin >> str;
      matrix[i] = str;
    }

    char rows = checkRows(matrix);
    if (rows) {
      cout << rows
        << "\n";
      continue;
    }

    // char columns = checkColumns(matrix);
    // if (columns) {
    //   cout << columns
    //     << "\n";
    //   continue;
    // }

    cout << "B\n";
  }

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

