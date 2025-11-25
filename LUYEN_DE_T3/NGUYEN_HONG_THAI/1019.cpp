#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, q;
  cin >> n >> q;
  vector<ll> a(n + 1, 0);
  for (ll i = 1; i <= n; i++) {
    ll x;
    cin >> x;
    a[i] = a[i - 1] + x;
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    cout << a[r] - a[l - 1] << "\n";
  }
}
