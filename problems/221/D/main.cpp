#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

struct Query {
  int l, r, idx;
  int block;
  bool operator < (const Query& other) const {
    if (block != other.block) {
      return block < other.block;
    }
    return (block & 1) ? (r > other.r) : r < other.r;
  }
};

void solve() {
  int n, q; cin >> n >> q;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int block_size = max(1, (int)(sqrt(n)));
  vector<Query> queries(q);
  for (int i = 0; i < q; i++) {
    cin >> queries[i].l >> queries[i].r;
    --queries[i].l; --queries[i].r;
    queries[i].idx = i;
    queries[i].block = queries[i].l / block_size;
  }
  sort(queries.begin(), queries.end());

  vector<int> freq(1e6, 0), ans(q);
  int currL = 0, currR = -1, distinct = 0;

  // for (int i = 0; i < q; i++)
  //   cerr << queries[i].l << ":" << queries[i].r << endl;

  auto add = [&](int idx){
    if (arr[idx] > 1e5)
      return;

    if (freq[arr[idx]] == arr[idx])
      distinct--;
    freq[arr[idx]]++;
    if (freq[arr[idx]] == arr[idx])
      distinct++;
  };

  auto remove = [&](int idx){
    if (arr[idx] > 1e5)
      return;

    if (freq[arr[idx]] == arr[idx])
      distinct--;
    freq[arr[idx]]--;
    if (freq[arr[idx]] == arr[idx])
      distinct++;
  };

  for (auto& q:queries) {
    while (currL > q.l) add(--currL);
    while (currR < q.r) add(++currR);
    while (currL < q.l) remove(currL++);
    while (currR > q.r) remove(currR--);
    ans[q.idx] = distinct;
  }

  for (int x : ans)
    cout << x << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

