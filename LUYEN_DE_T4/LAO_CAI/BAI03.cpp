#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll n, k;
  cin >> n >> k;

  vector<ll> a(n + 1), pref(n + 1, 0);
  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
    pref[i] = (pref[i - 1] + a[i]) % k;
  }

  vector<ll> first_mod(k, -1);
  first_mod[0] = 0;

  ll best_len = 0, L = -1, R = -1;

  for (ll i = 1; i <= n; i++) {
    ll mod = pref[i];

    if (first_mod[mod] == -1) {
      first_mod[mod] = i;
    } else {
      ll length = i - first_mod[mod];
      if (length > best_len) {
        best_len = length;
        L = first_mod[mod] + 1;
        R = i;
      }
    }
  }

  if (best_len == 0) {
    cout << 0;
  } else {
    cout << L << " " << R;
  }
}
