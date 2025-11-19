#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, maxn = 0;
  cin >> n;
  vector<ll> a(n), l(n), r(n);

  for (auto &x : a) {
    cin >> x;
  }

  l[0] = a[0];
  r[n - 1] = a[n - 1] * 3;

  for (ll i = 1; i < n - 2; i++) {
    l[i] = max(l[i - 1], a[i]);
  }
  for (ll i = n - 2; i > 1; i--) {
    r[i] = max(r[i + 1], a[i] * 3);
  }
  for (ll i = 1; i < n - 1; i++) {
    maxn = max(maxn, l[i - 1] + a[i] * 2 + r[i + 1]);
  }

  cout << maxn;
}
