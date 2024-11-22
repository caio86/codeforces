#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;

bool dfs(int start, vb& visited, const vi& list, const int want) {
  visited[start] = true;
  // cout << "Start: "
  //   << start+1
  //   << '\n';

  if (visited[want])
    return true;

  // next
  size_t next = list[start] + start;
  // cout << "Next: "
  //   << next+1
  //   << "\n";

  if (next == want)
    return true;

  if (next > list.size()-1)
    return false;

  return dfs(next, visited, list, want);
}

bool canGoTo(vi& list, int n) {
  vb visited(list.size());
  return dfs(0, visited, list, n);
}


void solve() {
  int n, t; cin >> n >> t;

  vi portais(n-1);

  for (auto& portal : portais) {
    cin >> portal;
  }

  if (canGoTo(portais, t-1))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

