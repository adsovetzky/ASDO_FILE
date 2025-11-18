#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, k;
  cin >> n >> k;
  vector<long long> a(n + 1, 0);

  for (long long i = 1; i <= n; i++) {
    long long x;
    cin >> x;
    a[i] = a[i - 1] + x;
  }
  cout << "hello world";
}
