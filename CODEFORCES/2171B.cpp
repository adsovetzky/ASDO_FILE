#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
      cin >> x;

    ll L = a[0], R = a[n - 1];

    if (L == -1 && R == -1) {
      L = R = 0;
    } else if (L == -1) {
      L = R;
    } else if (R == -1) {
      R = L;
    }

    a[0] = L;
    a[n - 1] = R;

    for (int i = 1; i < n; i++) {
      if (a[i] == -1)
        a[i] = 0;
    }

    for (int i = n - 2; i >= 0; i--) {
      if (a[i] == -1)
        a[i] = 0;
    }

    cout << llabs(a[n - 1] - a[0]) << "\n";
    for (ll x : a)
      cout << x << " ";
    cout << "\n";
  }
}
