#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  freopen("thoigian.INP", "r", stdin);
  freopen("thoigian.OUT", "w", stdout);

  ll h, m, s;
  cin >> h >> m >> s;
  if (s < 59) {
    cout << h << " " << m << " " << s + 1;
  } else {
    if (m < 59) {
      cout << h << " " << m + 1 << " " << 0;
    } else {
      if (h < 23) {
        cout << h + 1 << " " << 0 << " " << 0;
      } else {
        cout << 0 << " " << 0 << " " << 0;
      }
    }
  }
}
