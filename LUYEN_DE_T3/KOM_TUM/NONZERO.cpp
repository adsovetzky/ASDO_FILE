#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll T;
  cin >> T;
  while (T--) {
    ll n, cnt = 0, tong = 0, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
      ll x;
      cin >> x;
      tong += x;
      if (x == 0)
        cnt++;
    }
    if (tong == 0)
      ans++;
    ans += cnt;
    cout << ans << "\n";
  }
}
