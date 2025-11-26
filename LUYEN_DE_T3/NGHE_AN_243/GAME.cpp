#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  ll a;
  cin >> a;
  vector<ll> b, c;
  for (ll i = 0; i < n - 1; i++) {
    ll x;
    cin >> x;
    b.push_back(abs(x - a));
  }
  ll mingcd = b[0];
  for (ll i = 1; i < b.size(); i++) {
    mingcd = gcd(mingcd, b[i]);
  }
  for (long long i = 2; i * i <= mingcd; i++) {
    if (mingcd % i == 0) {
      c.push_back(i);
      if (i * i != mingcd) {
        c.push_back(mingcd / i);
      }
    }
  }
  sort(c.begin(), c.end());
  c.push_back(mingcd);
  for (auto x : c) {
    cout << x << " ";
  }
}
