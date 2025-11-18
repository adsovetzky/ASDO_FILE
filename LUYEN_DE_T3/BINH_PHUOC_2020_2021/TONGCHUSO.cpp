#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long res = 0;
  string s;
  cin >> s;
  for (auto c : s) {
    res += c - '0';
  }
  cout << res;
}
