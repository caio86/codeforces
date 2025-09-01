#include <bits/stdc++.h>
#include <utility>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

vector<vector<char>> mapa;
vector<vector<int>> vis;

int n, m;

pair<int, int> pos[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool valid(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m)
    return false;
  if (vis[i][j])
    return false;
  if (mapa[i][j] == 'D')
    return false;
  return true;
}

void dfs(int i, int j) {
  vis[i][j] = 1;

  if (mapa[i][j] == 'S')
    mapa[i][j] = 'X';

  for (auto [u, v] : pos) {
    int iu = i + u;
    int jv = j + v;

    if (valid(iu, jv))
      dfs(iu, jv);
  }
}

void solve() {
  string ans;
  cin >> ans;

  if (ans == "No")
    return;

  cin >> n >> m;

  mapa = vector(n, vector(m, '.'));
  vis = vector(n, vector(m, 0));

  queue<pair<int, int>> w;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char buff;
      cin >> buff;

      if (buff == 'W')
        w.push({i, j});

      mapa[i][j] = buff;
    }
  }

  while (!w.empty()) {
    auto ij = w.front();
    int i = ij.first;
    int j = ij.second;
    w.pop();
    if (vis[i][j] == 0)
      dfs(i, j);
  }

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
