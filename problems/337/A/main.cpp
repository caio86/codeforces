#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define INF 1e9;

void solve() {
  int n; cin >> n;
  int m; cin >> m;
  int menorDiff = INF;

  vi puzzles(m);
  for (auto& puzzle : puzzles) {
    cin >> puzzle;
  }

  sort(puzzles.begin(), puzzles.end());
  vi::iterator start = puzzles.begin();
  vi::iterator end = puzzles.begin() + n-1;

  while (end != puzzles.end()) {
    int diff = *end++ - *start++;
    if (diff < menorDiff)
      menorDiff = diff;
  }

  cout << menorDiff
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

