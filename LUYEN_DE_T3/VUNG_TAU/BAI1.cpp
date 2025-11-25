#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll n, p;
  cin >> n >> p;
  cout << min(p / 2, (n - p) / 2);
}
