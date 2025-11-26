#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  ll l = 0, r = 0, cnt = 0;
  for (ll i = 1; i <= n; i++) {
    if (s[i] == s[i - 1]) {
      cnt++;
      if (cnt == k) {
        l = i - k + 1;
        r = i;
        break;
      } else {
        cnt = 1;
      }
    }
    for (ll i = l; i <= r; i++) {
      if (cnt == k) {
        cout << s[i];
      } else {
        cout << cnt << " ";
        cout << "No";
        return 0;
      }
    }
  }
}
