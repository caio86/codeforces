#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

vector<int> fatores_primos(int n) {
  vector<int> primos;

  if (n % 2 == 0) {
      primos.push_back(2);
      while(n%2==0)
        n /= 2;
  }

  for (int i = 3; i * i <= n; i+=2) {
    if (n % i == 0) {
      primos.push_back(i);
      while(n%i==0)
        n /= i;
    }
  }

  if (n > 2)
    primos.push_back(n);

  // cout << "*** ";
  // for (auto x : primos)
  //   cout << x << " ";
  // cout << endl;

  return primos;
}

void solve() {
  int n; cin >> n;

  int ans = 0;

  for (int i = 1; i <= n; i++) {
    if (fatores_primos(i).size() == 2)
      ans++;
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

