#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  unordered_map<ll, ll> mp;

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (!mp.count(x)) {
      mp[x] = i + 1;
    }
  }
  ll q;
  cin >> q;
  while (q--) {
    ll x;
    cin >> x;
    cout << mp[x] << "\n";
  }
}
