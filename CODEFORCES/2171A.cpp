#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n) { return n & 1 ? 0 : (n / 4) + 1; }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    cout << solve(n) << "\n";
  }
}
