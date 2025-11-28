#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1e7;
vector<bool> is_prime(MAXN + 1, 1);
vector<ll> prime(MAXN + 1, 0);

ll reversemeow(ll n) {
  string s = to_string(n);
  reverse(s.begin(), s.end());
  return stol(s);
}

void sang() {
  is_prime[0] = is_prime[1] = 0;

  ll i = 2;
  while (i * i <= MAXN) {
    for (ll j = 2; j <= MAXN / i; j++) {
      is_prime[i * j] = 0;
    }
    for (i++; !is_prime[i]; i++)
      ;
  }
  for (ll i = 2; i <= MAXN; i++) {
    prime[i] = prime[i - 1];
    if (is_prime[i] && is_prime[reversemeow(i)]) {
      prime[i]++;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  sang();
  ll a, b;

  cin >> a >> b;
  cout << prime[b] - prime[a - 1];
}
