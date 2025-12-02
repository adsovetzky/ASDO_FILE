#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n;
  cin >> n;

  ld x = (sqrt(1 + 8.0L * n) - 1) / 2.0L;
  ll k = ceil(x);

  ll prev = (k - 1) * k / 2;
  ll pos = n - prev;

  ll p, q;

  if (k % 2 == 1) {
    p = k - pos + 1;
    q = pos;
  } else {
    p = pos;
    q = k - pos + 1;
  }

  cout << q << "/" << p;
}
