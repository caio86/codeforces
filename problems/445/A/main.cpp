#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

struct dado {
  char real;
  char valor;
};

typedef vector<dado> vc;
typedef vector<vc> vvc;

typedef vector<int> vi;
typedef vector<vi> vvi;

vvc board;
vvi vis;

char valores[2] = {'B', 'W'};
int valorAtual = 0;
char proximo(char b) {
  if (b == 'B')
    return 'W';
  else
    return 'B';
}
char pegarAtual() {
  auto ret = valores[valorAtual];

  if (valorAtual == 0)
    valorAtual = 1;
  else
    valorAtual = 0;

  return ret;
}

int n, m;

bool valido(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m)
    return false;

  if (vis[i][j] != 0)
    return false;

  return true;
}

pair<int, int> pos[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
void dfs(int i, int j, char m) {
  vis[i][j] = 1;

  // cerr << "***: " << i << ":" << j << endl;

  if (board[i][j].real != '-')
    board[i][j].real = m;

  for (auto [u, v] : pos) {
    int iu = i+u;
    int jv = j+v;

    if (valido(iu, jv))
      dfs(iu,jv, proximo(m));
  }
}

void solve() {
  cin >> n >> m;

  board = vvc(n, vc(m, {'?', '?'}));
  vis = vvi(n, vi(m, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char buff; cin >> buff;

      board[i][j].real = buff;
    }
  }

  dfs(0,0,'B');

  for (auto &l: board) {
    for (auto c : l) {
      cout << c.real;
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

