#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1e5 + 5;
vector<bool> is_prime(MAXN, 1);
set<ll> primes;

void sang() {
  is_prime[0] = is_prime[1] = 0;
  for (ll i = 2; i * i < MAXN; i++) {
    if (is_prime[i])
      for (ll j = i * i; j < MAXN; j += i) {
        is_prime[j] = 0;
      }
  }
  for (ll i = 2; i < MAXN; i++) {
    if (is_prime[i]) {
      primes.insert(i);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  sang();

  ll n;
  cin >> n;
  vector<ll> a(n);

  for (auto &x : a) {
    cin >> x;
  }

  ll minlen = INT_MAX, len = INT_MAX;

  for (ll i = 0; i < n; i++) {
    if (primes.count(a[i])) {
      for (ll j = i + 1; j < n; j++) {
        if (primes.count(a[j])) {
          len = min(len, j - i + 1);
        }
      }
      minlen = min(minlen, len);
    }
  }
  cout << minlen;
}
