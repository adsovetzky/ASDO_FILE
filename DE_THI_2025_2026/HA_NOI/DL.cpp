#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll cnt = 0;
  string s;
  cin >> s;
  s = "#" + s;

  unordered_map<ll, ll> mp;
  vector<ll> a(s.size());
  mp[0] = 0;

  for (ll i = 1; i < s.size(); i++) {
    a[i] = a[i - 1] + (s[i] == 'V' ? 1 : -2);

    if (mp.find(a[i]) == mp.end()) {
      mp[a[i]] = i;
    } else {
      cnt = max(cnt, i - mp[a[i]]);
    }
  }
  cout << cnt;
}
