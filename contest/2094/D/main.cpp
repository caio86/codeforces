#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

void solve() {
  string p; cin >> p;
  string s; cin >> s;

  bool res = true;
  bool pulou = false;

  auto it_p = begin(p);
  auto it_s = begin(s);

  if (p == s) {
    py;
    return;
  }

  while (it_s != end(s)) {
    if (*it_s == *it_p) {
      it_s++;
      it_p++;
      pulou = false;
      continue;
    }

    if (*it_s == *(it_p-1) and !pulou) {
      it_s++;
      pulou = true;
      continue;
    }

    res = false;
    break;
  }

  if (it_p != end(p) || it_s != end(s))
    res = false;


  if (res)
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

