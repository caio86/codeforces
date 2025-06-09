#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

bool a(int arr[], int n) {
  int qtd = arr[0] % n;
  if (qtd == 0)
    qtd = n;
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] - ( i+1 ) * qtd;
    if (arr[i] < 0)
      return false;
  }

  cout << "CHAMOOU A\n";
  return true;
}

bool checkB(int arr[], int n) {
  int divisor = arr[0] / n;
  for (int i = 0; i < n; i++) {
    if (arr[i] % ( n-(i+1)+1 ) != 0 || arr[i] / ( n-(i+1)+1 ) != divisor)
      return false;
  }

  return true;
}

void solve() {
  int n; cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];


  bool resa = 0, resb = 0;
  while (true) {
    resb = checkB(arr, n);

    if (resb) {
      py;
      return;
    }

    resa = a(arr, n);
    if (!resa) {
      break;
    }
  }

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

