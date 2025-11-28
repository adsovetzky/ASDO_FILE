#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  map<ll, ll> mp;
  mp[0] = 1;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll pref = 0, res = 0;
  for (auto x : a) {
    pref += x - k;
    res += mp[pref];
    mp[pref]++;
  }
  cout << res;
}
