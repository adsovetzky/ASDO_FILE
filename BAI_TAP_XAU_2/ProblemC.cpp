#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin.ignore();
  ll n;
  cin >> n;
  string s;
  vector<pair<string, string>> quy_tac;
  while (n--) {
    string hide, seek;
    getline(cin, hide);
    getline(cin, seek);
    quy_tac.push_back({hide, seek});
  }
  getline(cin, s);
  for (auto x : quy_tac) {
    ll index = s.find(x.first);
    s.erase(index, (x.first).size());
    s.insert(index, x.second);
  }
  cout << s;
}
