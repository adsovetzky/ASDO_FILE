#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, p, k;
  cin >> n >> p >> k;
  vector<ll> a(n);

  for (auto &x : a) {
    cin >> x;
  }
  ll cnt = 0;

  sort(a.begin(), a.end());
  vector<long long> dp(n + 1, INT_MAX);
  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    dp[i] = dp[i - 1] + a[i - 1];
    if (i >= k)
      dp[i] = min(dp[i], dp[i - k] + a[i - 1]);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++)
    if (dp[i] <= p)
      ans = i;

  cout << ans;
}
