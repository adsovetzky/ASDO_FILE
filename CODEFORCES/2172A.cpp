#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  vector<ll> a(3);
  for (auto &x : a) {
    cin >> x;
  }
  sort(a.begin(), a.end());
  if (a[2] - a[0] >= 10) {
    cout << "check again";
  } else {
    cout << "final " << a[1];
  }
}
