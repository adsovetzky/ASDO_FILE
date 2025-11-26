#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll x, k;
  cin >> x >> k;
  vector<ll> a = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200,
                  100,   50,    20,    10,   5,    2,    1};
  a.push_back(x);
  sort(a.begin(), a.end(), greater<ll>());
  while (k--) {
    ll ans = 0;
    ll n;
    cin >> n;
    for (auto x : a) {
      ans += n / x;
      n = n % x;
      if (n == 0)
        break;
    }
    cout << ans << "\n";
  }
}
