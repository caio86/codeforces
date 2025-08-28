#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<int> vi;
typedef vector<vi> vvi;

vvi gra;
vi vis;

int ans = 0;

void dfs(int u, int aws=1) {
  vis[u] = 1;

  ans = max(ans, aws);

  for (auto v: gra[u]) {
    if (vis[v] == 0)
      dfs(v, aws+1);
  }
}

void solve() {
  int n;
  cin >> n;

  stack<int> s;

  gra.resize(n+1);
  vis.resize(n+1);

  for (int i = 1; i <= n; i++) {
    int x; cin >> x;

    if (x == -1) {
      s.emplace(i);
      continue;
    }

    gra[x].push_back(i);
    gra[i].push_back(x);
  }

  while (!s.empty()) {
    int i =s.top();
    s.pop();
    if (vis[i] == 0)
      dfs(i);
  }

  // for (int i = 1; i <= n; i++ ) {
  //   cerr << "*** " << i << ": ";
  //   for (auto u : gra[i])
  //     cerr << u << " ";
  //   cerr << endl;
  // }

  cout << ans << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

