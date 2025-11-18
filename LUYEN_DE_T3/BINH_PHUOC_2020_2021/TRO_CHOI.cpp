#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, m;
  cin >> n >> m;
  vector<long long> a(n * m), b, kq;
  for (long long i = 0; i < m * n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  if (n == 1) {
    for (long long x : a)
      cout << x << " ";
  } else {
    long long d = 0, dem = 1;
    for (long long i = 0; i < a.size(); i++) {
      b.push_back(a[i]);
      d++;
      if (d == m) {
        if (dem % 2 == 0) {
          sort(b.begin(), b.end(), greater<long long>());
        }
        for (long long x : b)
          cout << x << " ";
        b.clear();
        cout << endl;
        dem++;
        d = 0;
      }
    }
  }
}
