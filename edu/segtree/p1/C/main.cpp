#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

typedef vector<ll> vll;

struct d {
  ll v; // value
  ll c; // count
};

struct segtree {
  int n;
  vector<d> tree;

  segtree(int size): n(size), tree(4*n) {}

  d compare(d &n1, d&n2) {
    if (n1.v == n2.v) {
      // n1 == n2
      return {n1.v, n1.c + n2.c};
    } else if (n1.v < n2.v) {
      // n1 <
      return {n1};
    } else {
      // n2 <
      return {n2};
    }
  }

  void build(const vll &a, int node, int l, int r) {
    if (r - l == 1) {
      tree[node] = {a[l], 1};
      return;
    }
    int mid = l + (r - l) / 2;
    build(a, 2*node+1, l, mid);
    build(a, 2*node+2, mid, r);

    d n1 = tree[2*node+1];
    d n2 = tree[2*node+2];

    tree[node] = compare(n1, n2);
  }

  d query(int ql, int qr, int node, int l, int r) {
    if (qr <= l || ql >= r)
      return {INT_MAX, 1};

    if (ql <= l && qr >= r)
      return tree[node];

    int mid = l + (r - l) / 2;
    d q1 = query(ql, qr, 2*node+1, l, mid);
    d q2 = query(ql, qr, 2*node+2, mid, r);

    return compare(q1, q2);
  }

  d query(int ql, int qr) { return query(ql, qr, 0, 0, n); }

  void update(int idx, int val, int node, int l, int r) {
    if (r - l == 1) {
      tree[node] = {val, 1};
      return;
    }

    int mid = l + (r - l) / 2;
    if (idx < mid)
      update(idx, val, 2*node+1, l, mid);
    else
      update(idx, val, 2*node+2, mid, r);

    tree[node] = compare(tree[2*node+1], tree[2*node+2]);
  }

  void update(int idx, int val) { update(idx, val, 0, 0, n); };
};

void solve() {
  int n, q;
  cin >> n >> q;

  vll arr(n);
  for (auto i = 0; i < n; i++)
    cin >> arr[i];

  segtree st(n);
  st.build(arr, 0,0, n);
  while (q--) {
    int t; cin >> t;
    if (t == 1) {
      int i, v;
      cin >> i >> v;
      st.update(i, v);
    }
    if (t == 2) {
      int l, r;
      cin >> l >> r;
      d res = st.query(l, r);
      cout << res.v << " " << res.c << endl;
    }
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

