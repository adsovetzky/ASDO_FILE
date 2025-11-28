#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll l, r, a, b;
  cin >> l >> r >> a >> b;
  cout << r / lcm(a, b) - (l - 1) / lcm(a, b);
}
