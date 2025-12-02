#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, k, p, x, m = 1e9 + 7;
  cin >> n >> k >> p;
  vector<ll> t(1e6, 0);
  p %= n;
  for (int i = 1; i <= n; i++) {
    ll p;
    cin >> p;
    t[i] = t[i - 1] + p;
  }
  x = k / n;
  k %= n;
  cout << (((x * (t[n] % m) % m) - (t[p - 1]) % m) + (t[k] & m)) % m;
}
