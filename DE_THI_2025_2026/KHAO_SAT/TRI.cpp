#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int temp = n * n - i * i;
    if (sqrt(temp) == int(sqrt(temp))) {
      ans += 4;
    }
  }
  cout << ans - 2;
}
