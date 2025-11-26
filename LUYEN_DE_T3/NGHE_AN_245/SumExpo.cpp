#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, s = 0, p = 0;
  cin >> n;
  vector<ll> a;

  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ll cnt = 0;
      while (n % i == 0) {
        n /= i;
        cnt++;
      }
      a.push_back(cnt);
    }
  }
  if (n > 1)
    a.push_back(1);
  for (auto x : a) {
    if (x & 1) {
      p += x;
    } else {
      s += x;
    }
  }
  cout << s << "\n" << p;
}
