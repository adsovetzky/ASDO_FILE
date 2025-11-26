#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for (auto &x : a) {
    cin >> x;
  }
  while (q--) {
    ll l, r, cnt = 0;
    cin >> l >> r;
    for (ll i = l - 1; i < r; i++) {
      for (ll j = i + 1; j < r; j++) {
        if (i < j && a[i] > a[j])
          cnt++;
      }
    }
    cout << cnt << "\n";
  }
}
