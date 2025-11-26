#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define meow long double
#define nya long long
meow pi = M_PI;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  nya n;
  cin >> n;
  meow res = 0;
  nya r, h;
  cin >> r >> h;
  res += pi * (meow)(r * r * h);
  n--;
  while (n--) {
    nya r, h;
    cin >> r >> h;
    if (pi * (meow)(r * r * h) > res) {
      res += pi * (meow)(r * r * h);
    }
  }
  cout << fixed << setprecision(3) << res;
}
