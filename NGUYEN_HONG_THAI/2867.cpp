#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, q;
  cin >> n >> q;
  vector<ll> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0);

  for (ll i = 1; i < n + 1; i++) {
    ll x;
    cin >> x;
    if (x == 1) {
      a[i] = a[i - 1] + 1;
      b[i] = b[i - 1];
      c[i] = c[i - 1];
    } else if (x == 2) {
      b[i] = b[i - 1] + 1;
      a[i] = a[i - 1];
      c[i] = c[i - 1];
    } else {
      c[i] = c[i - 1] + 1;
      a[i] = a[i - 1];
      b[i] = b[i - 1];
    }
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    cout << a[r] - a[l - 1] << " " << b[r] - b[l - 1] << " " << c[r] - c[l - 1]
         << "\n";
  }
}
