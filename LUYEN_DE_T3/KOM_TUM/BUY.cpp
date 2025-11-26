#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) {
    ll n, ans;
    cin >> n;
    ans = n;
    while (n / 10 != 0) {
      ans += n / 10;
      n = n % 10 + n / 10;
    }
    cout << ans << "\n";
  }
}
