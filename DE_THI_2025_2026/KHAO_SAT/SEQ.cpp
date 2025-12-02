#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 1e7;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll k, d, n;
  cin >> k >> d >> n;
  ll N = n % MOD;
  cout << k + (N - 1) * d << "\n";
  cout << N * k + (N * (N - 1)) / 2 * d;
}
