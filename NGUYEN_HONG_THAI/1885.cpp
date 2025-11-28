#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  ll n, cnt = 0, ans = 0;
  cin >> n;
  string s;
  unordered_map<ll, ll> mp;
  mp[0]++;
  cin >> s;

  ll i = 0;

  for (auto &x : s) {
    if (x == 'a') {
      cnt++;
    } else {
      cnt--;
    }
    mp[cnt]++;
  }
  for (auto x : mp) {
    ans += (x.second * (x.second - 1)) / 2;
  }
  cout << ans;
}
