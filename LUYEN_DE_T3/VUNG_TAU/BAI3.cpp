#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a0 = 1, a1 = 0, a11 = 0;
  ll x0 = a0, x1 = a1, x11 = a11;
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    x0 = a0;
    x1 = a1;
    x11 = a11;
    a11 = a1;
    a1 = a0;
    a0 = x0 + x1 + x11;
  }
  cout << a0 + a1 + a11;
}
