#include <bits/stdc++.h>
#include <cctype>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  string s;
  cin >> s;
  ll n = s.size();

  // prefix sum
  vector<ll> lower(n + 1, 0), upper(n + 1, 0), digit(n + 1, 0);

  for (ll i = 1; i <= n; i++) {
    lower[i] = lower[i - 1];
    upper[i] = upper[i - 1];
    digit[i] = digit[i - 1];
    if (islower(s[i - 1]))
      lower[i]++;
    else if (isupper(s[i - 1]))
      upper[i]++;
    else if (isdigit(s[i - 1]))
      digit[i]++;
  }

  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    ll L = i + 6;
    if (L > n)
      break;

    ll l = L, r = n, best = -1;
    while (l <= r) {
      ll mid = (l + r) / 2;

      bool ok = (lower[mid] - lower[i] > 0) && (upper[mid] - upper[i] > 0) &&
                (digit[mid] - digit[i] > 0);

      if (ok) {
        best = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }

    if (best != -1)
      ans += (n - best + 1);
  }

  cout << ans;
}
