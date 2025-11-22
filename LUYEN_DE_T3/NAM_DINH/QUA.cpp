#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long
const int MAXN = 300000;
vector<ll> tonguoc(MAXN, 1);

void sanguoc() {
  for (ll i = 2; i * i < MAXN; i++) {
    for (ll j = i * i; j < MAXN; j += i) {
      if (tonguoc[j] + i < MAXN)
        tonguoc[j] += i;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  sanguoc();

  ll n, cnt = 0;
  vector<ll> CHILL;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x == tonguoc[x]) {
      cnt++;
      CHILL.push_back(x);
    }
  }
  cout << cnt;
  if (cnt == 0) {
    return 0;
  } else {
    cout << "\n";
    for (auto x : CHILL) {
      cout << x << " ";
    }
  }
}
