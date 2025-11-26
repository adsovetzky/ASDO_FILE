#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, l = 1, r = 1, cnt = 0;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 1; i < n; i++) {
    if (a[i] >= a[i - 1]) {
      cnt++;
    } else {
      if (cnt > r - l) {
        r = i;
        l = i - cnt;
      }
      cnt = 0;
    }
  }
  cout << l << " " << r;
}
