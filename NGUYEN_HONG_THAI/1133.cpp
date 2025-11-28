#include <bits/stdc++.h>
#include <functional>
#include <iostream>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll s, n, cnt = 0, TamThoi = 0;
  bool ok = false;
  cin >> s >> n;
  vector<ll> a(n);
  for (auto &x : a) {
    cin >> x;
  }
  sort(a.begin(), a.end(), greater<int>());

  for (auto x : a) {
    TamThoi += x;
    if (TamThoi < s) {
      cnt++;
    } else {
      ok = true;
      cnt++;
      break;
    }
  }
  if (ok)
    cout << cnt;
  else
    cout << "impossible";
}
