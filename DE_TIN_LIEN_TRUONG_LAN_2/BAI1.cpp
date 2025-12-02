#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;
    ll cnt = 1;
    for (ll i = 1; i < s.size(); i++) {
      if (s[i] == s[i - 1])
        cnt++;
      else {
        cout << cnt << s[i - 1];
        cnt = 1;
      }
    }
    cout << cnt << s[s.size() - 1];
    cout << "\n";
  }
}
