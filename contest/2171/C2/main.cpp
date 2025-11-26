#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

const int MAXB = 1;
const int MAX = 2e5 + 10;

int n;
int a[MAX];
int b[MAX];

pair<int, int> getScore() {
  pair<int, int> score = {0,0};

  for (int i = 0; i < n; i++) {
    score.first ^= a[i];
    score.second ^= b[i];
  }

  // cout << "*** Score: " << score << '\n';
  return score;
}

string result(int a, int b) {
  if (a > b)
    return "Ajisai";

  if (a < b)
    return "Mai";

  return "Tie";
}

// turn 0 == ajisay == a, turn 1 == mai == b
void play(int round, int &s1, int &s2) {
  int turn = round % 2;

  int currA = s1;
  int currB = s2;
  int swapA = currA;
  int swapB = currB;

  auto swap = [&](int i) {
    swapA ^= a[i];
    swapB ^= b[i];

    int tmp = a[i];
    a[i] = b[i];
    b[i] = tmp;

    swapA ^= a[i];
    swapB ^= b[i];
  };

  swap(round);

  int diffA = swapA - currA;
  int diffB = swapB - currB;

  // cout << "\n*** dA: " << diffA << "\n*** dB: " << diffB << "\n*** turn: " << turn << "\n";
  if (turn) {
    if (diffA <= diffB) {
      // cout << "*** swap\n\n";
      s1 = swapA;
      s2 = swapB;
    } else {
      // cout << "*** pass\n\n";
      swap(round);
    }

  } else {

    if (diffA >= diffB) {
      // cout << "*** swap\n\n";
      s1 = swapA;
      s2 = swapB;
    } else {
      // cout << "*** pass\n\n";
      swap(round);
    }
  }
}

void solve() {
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    cin >> b[i];


  auto [ s1, s2 ] = getScore();

  for (int i = 0; i < n; i++) {
    play(i, s1, s2);
  }

  cout << result(s1, s2) << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  // t=1;
  while(t--)
    solve();
  return 0;
}

