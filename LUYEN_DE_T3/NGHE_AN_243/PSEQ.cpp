#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, k;
  cin >> n >> k;
  ll a, x, cnt = 0, ans = 0;
  map<ll, ll> mp;
  mp[0] = 1;
  for (ll i = 0; i < n; i++) {
    cin >> a;
    cnt += a;
    x = cnt - k;
    if (mp.count(x)) {
      ans += mp[x];
    }
    mp[cnt]++;
  }
  cout << ans;
}
