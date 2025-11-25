#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, ans = 0;
  cin >> n;
  ans = n / 5;
  ans += n % 5 / 3 + n % 5 % 3 / 2;
  if (n % 5 % 3 == 1)
    ans++;
  cout << ans;
}
