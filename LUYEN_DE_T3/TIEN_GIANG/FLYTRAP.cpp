#include <bits/stdc++.h>
using namespace std;

#define meow double
#define nya long long

meow area(nya x1, nya x2, nya x3, nya y1, nya y2, nya y3) {
  return fabs(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  nya x1, y1, x2, y2, x3, y3, n, cnt = 0;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> n;

  meow ABC = area(x1, x2, x3, y1, y2, y3);
  while (n--) {
    meow x, y;
    cin >> x >> y;
    meow ABM = area(x1, x2, x, y1, y2, y);
    meow BCM = area(x2, x3, x, y2, y3, y);
    meow CAM = area(x3, x1, x, y3, y1, y);
    if ((ABM + BCM + CAM) - ABC < 1e-9)
      cnt++;
  }
  cout << cnt;
}
