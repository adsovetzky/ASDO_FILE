#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("LBS.INP", "r", stdin);
  // freopen("LBS.OUT", "w", stdout);
  long long n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  long long cnt = 1, d1 = 0, kq = 0, d2 = 0;
  vector<long long> a;
  for (long long i = 0; i < s.size(); i++) {
    if (s[i] == s[i + 1]) {
      cnt++;
    } else {
      d1 = cnt - k;
      if (d1 > 0)
        kq += d1;
      cnt = 1;
      a.push_back(kq);
    }
  }
  cout << s.size() - kq;
}
