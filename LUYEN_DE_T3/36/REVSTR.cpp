#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  ll q;
  cin >> q;
  while (q--) {
    ll x;
    cin >> x;
    reverse(s.begin() + x - 1, s.end() - x + 1);
  }
  cout << s;
}
