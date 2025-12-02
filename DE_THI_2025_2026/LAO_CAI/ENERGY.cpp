#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll n, K = 0;
  ll last = 1;
  cin >> n;
  vector<ll> a(n);
  for (auto &x : a) {
    cin >> x;
  }
  for (ll i = 1; i < n; i++) {
    if (a[i] >= i - last) {
      K = max(K, i - last);
      last = i;
    }
  }
  cout << K;
}
