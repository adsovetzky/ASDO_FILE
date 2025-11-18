#include <bits/stdc++.h>
using namespace std;

#define meow long long

int main() {

  freopen("PASSWORD.INP", "r", stdin);
  freopen("PASSWORD.OUT", "w", stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  meow m;
  cin >> m;
  string t;
  cin >> t;
  bool ok = false;

  unordered_map<char, meow> mp;
  vector<char> first_time;

  for (auto x : t) {
    if (mp[x] == 0) {
      first_time.push_back(x);
    }
    mp[x]++;
  }
  for (auto x : first_time) {
    if (mp[x] == 1) {
      ok = true;
      char nya;
      if (islower(x + m)) {
        nya = x + m;
      } else {
        nya = x - 26 + m;
      }
      cout << nya;
    }
  }
  if (!ok)
    cout << 0;
}
