#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

void dfs(int u, vector<vector<int>> &adj, vector<int> &vis, int arr[]) {
  vis[u] = 1;

  for (auto v : adj[u]) {
    if (!vis[v]) {
      dfs(v, adj, vis, arr);
    }
  }
}

void solve() {
  int n; cin >> n;

  vector<vector<int>> con(n);
  vector<int> vis(n, 0);

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (arr[i] < arr[j]) {
        con[i].push_back(j);
        con[j].push_back(i);
      }
    }
  }

  // for (int i = 0; i < n; i++) {
  //   cout << i << ": ";
  //   for (auto x : con[i]) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }

  dfs(0, con, vis, arr);

  // for (int i = 0; i < n; i++) {
  //   cout << vis[i] << " ";
  // }
  // cout << endl;

  if (all_of(vis.begin(), vis.end(), [&](int i){ return i == 1;})) {
    py;
  } else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}

