#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n;
  cin >> n;
  ll ans = 0, b = 1;
  while (b <= n) {
    ll t = n / b;
    ll r = n / t;
    ans += (r - b + 1) * t;
    b = r + 1;
  }
  cout << ans;
}
