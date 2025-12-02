#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ll n, m, v;
  cin >> n >> m >> v;
  cout << ((n - v + m) > 50 ? 100 : 0) << "\n";
  cout << ((100 - (n - v + m) < 20) ? 50 : 0);
}
