#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

vector<vector<int>> adj;
vector<int> vis;
vector<int> hasCat;

int n;
int m;

void dfs(int u, int qtdC, int &ans) {
  vis[u] = 1;

  if (qtdC > m)
    return;

  int leaf = 1;

  // :|
  // cout << u << ": " << qtdC << endl;

  for (auto v : adj[u]) {
    if (vis[v] == 0) {
      leaf = 0;
      if (hasCat[v])
        dfs(v, qtdC+1, ans);
      else
        dfs(v, 0, ans);
    }
  }

  if (leaf)
    ans++;
}

void solve() {
  // n = vertices
  // m = max consecutives cats
  cin >> n >> m;


  adj.resize(n+1);
  vis.resize(n+1);
  hasCat.resize(n+1);

  for (int i = 1; i <= n; i++) {
    int c; cin >> c;
    hasCat[i] = c;
  }

  for (int i = 2; i <= n; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int ans = 0;
  dfs(1, hasCat[1], ans);
  cout << ans << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

