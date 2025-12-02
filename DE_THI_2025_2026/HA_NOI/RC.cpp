#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m;
  cin >> n >> m;

  vector<ll> B(n), C(n);
  vector<vector<ll>> groups(m + 1);

  for (int i = 0; i < n; i++)
    cin >> B[i];
  for (int i = 0; i < n; i++)
    cin >> C[i];

  for (int i = 0; i < n; i++) {
    groups[B[i]].push_back(C[i]);
  }

  sort(C.begin(), C.end());
  ll allSum = 0, prefix = 0;

  for (int i = 0; i < n; i++) {
    allSum += C[i] * i - prefix;
    prefix += C[i];
  }

  ll sameSum = 0;

  for (int t = 1; t <= m; t++) {
    auto &v = groups[t];
    if (v.size() <= 1)
      continue;

    sort(v.begin(), v.end());

    ll pref2 = 0;
    for (int i = 0; i < (int)v.size(); i++) {
      sameSum += v[i] * i - pref2;
      pref2 += v[i];
    }
  }

  cout << allSum - sameSum;
  return 0;
}
