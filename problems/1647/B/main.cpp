#include <bits/stdc++.h>
using namespace std;

#define py cout << "YES\n"
#define pn cout << "NO\n"

typedef vector<int> vi;
typedef vector<vi> vii;

vii M;

void solve() {
	int n, m; cin >> n >> m;

	M = vii(n, vi(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char cell; cin >> cell;
			int cellInt = cell == '1';
			M[i][j] = cellInt;
		}
	}

	if (n<2 or m<2) {
		py;
		return;
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			int soma = 0;
			soma += M[i][j]; 	// E C
			soma += M[i][j+1];	// D C
			soma += M[i+1][j];	// E B
			soma += M[i+1][j+1];	// D B
			//cout << M[i][j] << " " << M[i][j+1] << endl;
			//cout << M[i+1][j] << " " << M[i+1][j+1] << endl;
			if (soma == 3) {
				pn;
				return;
			}
		}
	}

	py;

}

int main() {
	cin.tie(); cout.tie();
	ios::sync_with_stdio();
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}
