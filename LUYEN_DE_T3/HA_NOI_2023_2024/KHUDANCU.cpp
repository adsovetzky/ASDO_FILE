#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll m, n, d, k;
  cin >> m >> n >> d >> k;
  vector<vector<char>> a(m, vector<char>(n));
  vector<pair<ll, ll>> KhuDanCu, SieuThi;
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'P') {
        KhuDanCu.push_back({i, j});
      } else if (a[i][j] == 'M') {
        SieuThi.push_back({i, j});
      }
    }
  }
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
    }
  }
}
