#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long double n;
  cin >> n;
  long double chill;
  if (n >= 26) {
    chill = (n - 25) * 103 + 3795;

  } else if (n <= 25 && n > 15) {
    chill = (n - 15) * 92 + 1495;
  } else if (n <= 15 && n > 5) {
    chill = (n - 5) * 78 + 325;
  } else {
    chill = n * 65;
  }
  cout << chill << "00.00" << "\n";
  cout << chill * .12 << "00.00" << "\n";
  cout << chill + chill * .12 << "00.00" << "\n";
}
