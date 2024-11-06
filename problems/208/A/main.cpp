#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

string trim(const string& str) {
  size_t first = str.find_first_not_of(" \t\n\r\f\v");
  if (first == string::npos) {
    return "";
  }
  size_t last = str.find_last_not_of(" \t\n\r\f\v");
  return str.substr(first, last - first + 1);
}

void solve() {
  string s; cin >> s;
  string delimiter("WUB");

  string result = "";

  size_t start = 0;
  size_t end = s.find(delimiter);

  while (end != string::npos) {
    result += s.substr(start, end - start) + " ";
    start = end + delimiter.length();
    end = s.find(delimiter, start);
  }
  result += s.substr(start);

  result = trim(result);

  cout << result
    << "\n";

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

