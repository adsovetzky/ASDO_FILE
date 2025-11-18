#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool sum(ll x) {
  ll tong = 0;
  for (ll i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      tong += i;
      while (x % i == 0)
        x /= i;
    }
  }
  if (x > 1)
    tong += x;
  if (tong % 5 == 0)
    return true;
  else
    return false;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n;
  bool ok = false;
  cin >> n;
  vector<ll> a(n);

  for (auto &x : a) {
    cin >> x;
    if (sum(x)) {
      cout << x << " ";
      ok = true;
    }
  }
  if (!ok)
    cout << -1;
}
