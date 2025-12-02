#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll x, s, t;
  cin >> x >> s >> t;
  cout << (((t - 1) % (x + s) + 1 <= x) ? 1 : 0);
}
