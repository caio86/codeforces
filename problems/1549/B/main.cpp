#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define vi vector<int>
#define vii vector<vi>

int n;
vii mapa;

vii adj;

// Filtrei por DFS, mas acho que assim resolve
// P.S. Não resolveu
int dfs(int u, int j, int &ans) {
  // 1 achou
  // 0 nao achou
  // cout << "*** " << u << endl;

  for (auto v : adj[u]) {
    if (dfs(v, u, ans) == 1) {
      break;
    }
  }

  // leaf
  if (u < n) {
    // cout << "*** testes 0\n";
    if (mapa[0][u] == 1 && u % n != j % n) {
      // cout << "*** testes 1\n";
      mapa[0][u] = 2;
      ans++;
      return 1;
    }
    if (mapa[0][u] == 0 && u % n == j % n) {
      // cout << "*** testes 2\n";
      mapa[0][u] = 2;
      ans++;
      return 1;
    }
  }

  return 0;
}

void solve() {
  cin >> n;
  mapa = vii(2);
  adj = vii(2*n+1);

  for (int i = 0; i < n*2; i++) {
    char x; cin >> x;
    int xi = x - '0';

    if (i < n) {
      mapa[0].push_back(xi);
      continue;
    }

    mapa[1].push_back(xi);

    if (xi == 0)
      continue;

    if (i-n-1 >= 0)
      adj[i].push_back(i-n-1);

    adj[i].push_back(i-n);

    if (i-n+1 < n)
      adj[i].push_back(i-n+1);

    adj[2*n].push_back(i);
  }

  // for (auto &x: adj) {
  //   for (auto n : x) {
  //     cout << n << " ";
  //   }
  //   cout << endl;
  // }

  int ans = 0;
  // for (int i = 0; i < n; i++) {
  //   if (mapa[1][i] == 1)
  dfs(2*n, -1,ans);
  // }

  cout << ans << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  // t = 2;
  while (t--)
  solve();
  return 0;
}

