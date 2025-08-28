#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<char> vc;
typedef vector<vc> vvc;

typedef vector<int> vi;
typedef vector<vi> vvi;

vvc mapa;
vvi vis;
int n;
int m;
int k;
int curr = 0;

pair<int, int> pos[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool canGo(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m)
    return false;

  if (vis[i][j])
    return false;

  if (mapa[i][j] != '.')
    return false;

  return true;
}

void dfs(int i, int j) {
  vis[i][j] = 1;

  cerr << "***: " << i << ":" << j << "=" << mapa[i][j] << endl;

  for (auto [u, v] : pos) {
    int iu = i + u;
    int jv = j + v;

    if (canGo(iu, jv))
      dfs(iu, jv);
  }

  if (curr < k) {
    mapa[i][j] = 'X';
    curr++;
  }
}

void dfs() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mapa[i][j] == '.') {
        dfs(i, j);
        return;
      }
    }
  }
}

void solve() {
  cin >> n >> m >> k;

  mapa = vvc(n, vc(m));
  vis = vvi(n, vi(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mapa[i][j];
    }
  }

  dfs();

  for (auto &l : mapa) {
    for (auto c : l) {
      cout << c;
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
