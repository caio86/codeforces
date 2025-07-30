#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

typedef vector<int> vi;
typedef vector<vi> vvi;

// void fillTable(int** table, int size, int start) {
//   // Size Half
//   int sizeH = size/2;
//   if (size == 2) {
//     table[0][0] = start - 3;
//     table[1][1] = start - 2;
//     table[1][0] = start - 1;
//     table[0][1] = start;
//     return;
//   }
//
//
//   // Q1
//   int* q1[sizeH];
//   for (int i = 0; i < sizeH; i++) {
//     q1[i] = table[i];
//   }
//
//
//   // Q2
//   int* q2[sizeH];
//   for (int i = 0; i < sizeH; i++) {
//     q2[i] = table[i];
//   }
//
//   // Q3
//   int* q3[sizeH];
//   for (int i = sizeH; i < sizeH*2; i++) {
//     q3[i] = table[i];
//   }
//
//   // Q4
//   int* q4[sizeH];
//   for (int i = sizeH; i < sizeH*2; i++) {
//     q4[i] = table[i];
//   }
//
//   for (int i = 0; i < sizeH; i++) {
//     for (int j = 0; j < sizeH; j++) {
//       cout << q4[i][j] << endl;
//     }
//   }
//
//   // for (int i = 0; i < size; i++) {
//   //   for (int j = 0; j < size; j++) {
//   //     if (i >= sizeH) {
//   //       // 3 e 4
//   //       if (j >= sizeH) {
//   //         // 4
//   //         table[i][j] = 4;
//   //       } else {
//   //         // 3
//   //         table[i][j] = 3;
//   //         cout << i << ":" << j << " " << q1c++ % sizeH << endl;
//   //       }
//   //     } else {
//   //       // 1 e 2
//   //       if (j >= sizeH) {
//   //         // 2
//   //         table[i][j] = 2;
//   //       } else {
//   //         // 1
//   //         row = q1c / (sizeH);
//   //         col = q1c++ % (sizeH);
//   //         q1[row][col] = table[i][j];
//   //         cout << row << ":" << col << endl;
//   //       }
//   //     }
//   //   }
//   // }
// }

struct coordinate {
  ll row;
  ll col;
};

coordinate findByNumber(ll x, ll size) {
  // metade
  ll sizeM = size/2;

  // Quanto por quadrante
  ll qtdQ = (size*size)/4;

  // cout << "Searching for " << x
  //   << " On size: " << size
  //   << " with qtdQ: " << qtdQ
  //   << endl;

  if (size < 2)
    return {0,0};

  if (size == 2) {
    if (x == 1)
      return {1, 1};
    if (x == 2)
      return {2, 2};
    if (x == 3)
      return {2, 1};
    if (x == 4)
      return {1, 2};
  }

  // Q1
  if (x <= qtdQ)
    return findByNumber(x, sizeM);

  // Q4
  if (x <= qtdQ * 2) {
    auto cc = findByNumber(x - qtdQ, sizeM);
    return {cc.row+sizeM, cc.col+sizeM};
  }

  // Q3
  if (x <= qtdQ * 3) {
    auto cc = findByNumber(x - qtdQ * 2, sizeM);
    return {cc.row+sizeM, cc.col};
  }

  // Q2
  if (x <= qtdQ * 4) {
    auto cc = findByNumber(x - qtdQ * 3, sizeM);
    return {cc.row, cc.col+sizeM};
  }

  return {0, 0};
}

ll findByCoordinate(coordinate c, ll size) {
  // metade
  ll sizeM = size/2;

  // Quanto por quadrante
  ll qtdQ = (size*size)/4;

  if (size == 2) {
    if (c.row == 1) {
      if (c.col == 1) {
        return 1; // 1 1
      } else {
        return 4; // 1 2
      }
    } else {
      if (c.col == 1) {
        return 3; // 2 1
      } else {
        return 2; // 2 2
      }
    }
  }

  // q1
  if (c.row <= sizeM && c.col <= sizeM)
    return findByCoordinate(c, sizeM);

  // q2
  if (c.row <= sizeM && c.col > sizeM)
    return findByCoordinate({c.row, c.col-sizeM}, sizeM) + qtdQ * 3;

  // q3
  if (c.row > sizeM && c.col <= sizeM)
    return findByCoordinate({c.row-sizeM, c.col}, sizeM) + qtdQ * 2;

  // q4
  if (c.row > sizeM && c.col > sizeM)
    return findByCoordinate({c.row-(sizeM), c.col-(sizeM)}, sizeM) + qtdQ;

  return 0;
}

void solve() {
  int n; cin >> n;
  ll size = pow(2, n);

  int q; cin >> q;
  while (q--) {
    string s; cin >> s;
    if (s == "->") {
      coordinate coord;
      cin >> coord.row;
      cin >> coord.col;
      cout << findByCoordinate(coord, size) << endl;
    } else {
      ll x; cin >> x;
      coordinate res = findByNumber(x, size);
      cout << res.row << " " << res.col << endl;
    }
  }

  // int arr[size][size], c = 1;
  // for (auto x : arr) {
  //   iota(x, x+size, c);
  //   c+=size;
  // }
  // array the pointers
  // int* arp[size];
  // for (int i = 0; i < size; i++) {
  //   arp[i] = arr[i];
  // }
  // fillTable(arp, size, size2);
  // for (auto &row : arr) {
  //   for (auto cell : row) {
  //     cout << cell << "\t";
  //   }
  //   cout << endl;
  // }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

