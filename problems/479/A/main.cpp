#include <bits/stdc++.h>
using namespace std;

int getMax(const int a, const int b,const int c) {
  int o1 = a+b*c;
  int o2 = a*(b+c);
  int o3 = a*b*c;
  int o4 = (a+b)*c;
  int o5 = a+b+c;

  return max({o1, o2, o3, o4, o5});
}

void solve() {
  int a, b, c; cin >> a >> b >> c;

  int max = getMax(a, b, c);

  cout << max
    << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

