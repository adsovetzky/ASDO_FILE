#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> inp(n);
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    cin >> inp[i];
    cnt[inp[i]]++;
  }
  sort(inp.begin(), inp.end());
  int l = 0, r = n - 1, ans = 0;
  while (l <= r) {
    if (inp[r] + inp[l] > x) {
      r--;
      ans++;
    }

    else {
      ans++;
      r--;
      l++;
    }
  }
  cout << ans;
}
