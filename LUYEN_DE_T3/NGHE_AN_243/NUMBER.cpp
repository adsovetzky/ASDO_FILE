#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1e5;
vector<bool> is_prime(MAXN, 1);

void sang() {
  is_prime[0] = is_prime[1] = 0;
  for (ll i = 2; i * i < MAXN; i++) {
    if (is_prime[i]) {
      for (ll j = i * i; j < MAXN; j += i) {
        is_prime[j] = 0;
      }
    }
  }
}

int main() {
  freopen("NUMBER.INP", "r", stdin);
  freopen("NUMBER.OUT", "w", stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  sang();

  vector<ll> a;
  ll x;
  while (cin >> x) {
    a.push_back(x);
  }
  for (ll i = a.size() - 2; i >= 1; i--) {
    if (is_prime[a[i - 1]] && is_prime[a[i + 1]]) {
      cout << i + 1;
      return 0;
    }
  }

  cout << 0;
}
