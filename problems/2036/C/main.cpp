#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(...) debug(#__VA_ARGS__, __VA_ARGS__)
#else
#define D(...)
#endif

template<typename T>
void debug(const char* name, T&& arg) {
    cout << name << " = " << arg << endl;
}

template<typename T, typename... Args>
void debug(const char* names, T&& arg, Args&&... args) {
    const char* comma = strchr(names, ',');
    cout.write(names, comma - names) << " = " << arg << " |";
    debug(comma + 1, args...);
}

typedef long long   ll;
typedef vector<int> vi;

#define INF       1e9
#define pno       cout<<"NO\n"
#define pys       cout<<"YES\n"
#define all(x)    (x).begin(), (x).end()

bool hasSub(const string str) {
  if (str.find("1100") != string::npos) {
    return true;
  }
  return false;
}

void solve() {
  int t; cin >> t;

  while (t--) {
    string s; cin >> s;
    int nq; cin >> nq;

    while (nq--) {
      int i, v; cin >> i >> v;
      s[i-1] = v;
      bool has = hasSub(s);
      if (has)
        pys;
      else
        pno;
    }
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

