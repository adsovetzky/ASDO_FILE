#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n;
  cin >> n;
  vector<ll> a(n);

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll best = INT_MIN;
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    sum = max(a[i], sum + a[i]);
    best = max(best, sum);
  }
  cout << best;
}
