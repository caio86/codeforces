#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

typedef vector<ll> vll;

struct segtree {
  int n;

  vll tree;

  segtree(int size) : n(size), tree(4 * size, 0) {}

  segtree(const vll &a) {
    n = a.size();
    tree.resize(4 * n);
    build(a, 0, 0, n);
  }

  void build(const vll &a, int node, int l, int r) {
    if (r - l == 1) {
      tree[node] = a[l];
      return;
    }

    int mid = l + (r - l) / 2;
    build(a, 2 * node + 1, l, mid);
    build(a, 2 * node + 2, mid, r);
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }

  ll query(int ql, int qr, int node, int l, int r) {
    if (qr <= l || ql >= r)
      return 0;

    if (ql <= l && qr >= r)
      return tree[node];

    int mid = l + (r - l) / 2;
    return query(ql, qr, 2 * node + 1, l, mid) +
           query(ql, qr, 2 * node + 2, mid, r);
  }

  ll query(int ql, int qr) { return query(ql, qr, 0, 0, n); }

  void update(int idx, ll val, int node, int l, int r) {
    if (r - l == 1) {
      tree[node] = val;
      return;
    }

    int mid = l + (r - l) / 2;

    if (idx < mid)
      update(idx, val, 2 * node + 1, l, mid);
    else
      update(idx, val, 2 * node + 2, mid, r);
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }

  void update(int idx, ll val) { update(idx, val, 0, 0, n); }

  void print() {
    cout << "***\n";
    for (auto x : tree) {
      cout << x << endl;
    }
    cout << "***\n";
  }
};

void solve() {
  int n, q;
  cin >> n >> q;

  vll arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  segtree st(arr);

  while (q--) {
    int type;
    cin >> type;

    if (type == 1) {
      int idx, val;
      cin >> idx >> val;
      st.update(idx, val);
    } else if (type == 2) {
      int l, r;
      cin >> l >> r;
      cout << st.query(l, r) << endl;
    }
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
