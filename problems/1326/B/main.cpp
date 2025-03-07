#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<long long> vi;

void solve() {
	long long n; cin >> n;

	vi B(n, 0);

	long long num; cin >> num;
	B[0] = num;
	long long maior = 0;
	for (long long i = 1; i < n; i++) {
		long long num; cin >> num;
		maior = max(maior, B[i-1]);
		B[i] = num + maior;
	}

	for (auto x: B) {
		cout << x << " ";
	}
	cout << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

