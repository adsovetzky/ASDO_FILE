#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1e6;

vector<ll> tonguoc(MAXN + 2, 1);

void tonguocnt() {
  for (int i = 2; i <= MAXN; i++) {
    for (int j = i; j <= MAXN; j += i) {
      tonguoc[j] += i;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  tonguocnt();

  ll n, k, q;
  cin >> n >> k >> q;
  vector<ll> a(n + k);

  // for (int i = 0; i < n; i++) {
  //   ll x;
  //   cin >> x;
  //   a[i] = tonguoc[x];
  // }
  //
  for (int i = 1; i < 21; i++) {
    cout << tonguoc[i] << " ";
  }
  // while (q--) {
  //   ll i;
  //   cin >> i;
  //
  //   cout << *max_element(a.begin() + i, a.begin() + i + k) << "\n";
  // }
}
