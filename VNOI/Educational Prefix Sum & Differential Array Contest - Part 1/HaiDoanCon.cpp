#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n;
  cin >> n;
  vector<ll> a(n), l(n), r(n);
  for (auto &x : a) {
    cin >> x;
  }
  ll maxn = INT_MIN;
  for (ll i = 0; i < n; i++) {
    maxn = max(a[i], maxn + a[i]);
    l[i] = max(l[i - 1], maxn);
  }
  maxn = INT_MIN;
  for (ll i = n - 1; i >= 0; i++) {
    maxn = max(a[i], maxn + a[i]);
    r[i] = max(r[i + 1], maxn);
  }
}
