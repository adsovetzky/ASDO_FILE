#include <bits/stdc++.h>
using namespace std;

bool ktra(long long m) {
  if (m == 0 || m == 1)
    return false;
  for (int i = 2; i <= sqrt(m); i++)
    if (m % i == 0)
      return false;
  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, x, d = 0, z;
  cin >> n >> x;
  if (x <= n)
    d += 2;
  if (ktra(x) == false)
    d += 2;
  else {
    cout << d;
    return 0;
  }
  z = sqrt(x);
  if (z == sqrt(x))
    d++;
  cout << d;
  return 0;
}
