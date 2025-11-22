#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("GOLD.INP", "r", stdin);
  freopen("GOLD.OUT", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, W, T;
  cin >> n >> W >> T;

  vector<long long> w(n), v(n);

  for (int i = 0; i < n; i++)
    cin >> w[i];
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<pair<long long, long long>> A, B;
  for (int i = 0; i < n; i++) {
    if (v[i] < T)
      A.push_back({w[i], v[i]});
    else
      B.push_back({w[i], v[i]});
  }

  vector<long long> dp(W + 1, 0);
  for (auto &x : A) {
    long long wi = x.first;
    long long vi = x.second;
    for (long long j = W; j >= wi; j--) {
      dp[j] = max(dp[j], dp[j - wi] + vi);
    }
  }

  long long ans = dp[W];
  for (auto &x : B) {
    long long wi = x.first, vi = x.second;
    if (wi <= W) {
      ans = max(ans, dp[W - wi] + vi);
    }
  }

  cout << ans;
  return 0;
}
