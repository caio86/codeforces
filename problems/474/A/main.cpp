#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;

void solve() {
  char shifting; cin >> shifting;
  string texto; cin >> texto;

  vc teclas = {
    'q','w','e','r','t','y','u','i','o','p',
    'a','s','d','f','g','h','j','k','l', ';',
    'z','x','c','v','b','n','m', ',', '.', '/'
  };

  for (auto chr : texto) {
    auto it = find(teclas.begin(), teclas.end(), chr);

    if (shifting == 'R')
      cout << *--it;
    else
      cout << *++it;
  }

  cout << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

