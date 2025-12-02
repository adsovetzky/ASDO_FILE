#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (int l = 1; l <= n; l++) {
    set<string> da_gap;
    bool unique = true;

    for (int i = 0; i <= n - l; i++) {
      string sub = s.substr(i, l);
      if (da_gap.count(sub)) {
        unique = false;
        break;
      }
      da_gap.insert(sub);
    }

    if (unique) {
      cout << l;
      return 0;
    }
  }
  return 0;
}
