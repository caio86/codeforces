#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<int> vi;
typedef vector<vi> vvi;

vi alunos;
vi vis;


int dfs(int u) {
  if (vis[u] == 0)
    vis[u] = 1;
  else
    return u;

  return dfs(alunos[u]);
}

void solve() {
  int n;
  cin >> n;

  alunos.resize(n+1);

  for (int i = 1; i <= n; i++) {
    int u;
    cin >> u;

    alunos[i] = u;
  }

  for (int i = 1; i <= n; i++) {
    vis = vi(n+1, 0);
    cout << dfs(i) << " ";
  }
  cout << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

