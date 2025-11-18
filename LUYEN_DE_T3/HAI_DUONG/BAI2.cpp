#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio();
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, index, MAXN = INT_MIN;
  cin >> n;
  map<ll, ll> mp;

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    mp[x]++;
  }
  for (auto x : mp) {
    if (MAXN < x.second) {
      MAXN = x.second;
      index = x.first;
    }
  }
  cout << index << " " << MAXN;
}
