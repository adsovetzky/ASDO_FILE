#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, m, k, ans = 0;
  cin >> n >> m >> k;
  vector<ll> a(n), b(m);

  for (auto &x : a) {
    cin >> x;
  }
  sort(a.begin(), a.end());
  for (auto &x : b) {
    cin >> x;
  }
  sort(b.begin(), b.end());

  ll i = 0, j = 0;

  while (i < n && j < m) {
    if (b[j] < a[i] - k)
      j++;
    else if (b[j] > a[i] + k)
      i++;
    else {
      ans++;
      i++;
      j++;
    }
  }
  cout << ans;
}
