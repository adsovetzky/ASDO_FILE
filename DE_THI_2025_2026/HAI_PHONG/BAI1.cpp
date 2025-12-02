#include <bits/stdc++.h>
using namespace std;

#define ld long double

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  ld y, n;
  cin >> y >> n;
  cout << 2 * y - y / pow(2, n);
}
