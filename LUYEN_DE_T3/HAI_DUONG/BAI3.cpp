#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll YOLO = 3;
  while (YOLO--) {
    bool ok = false;
    string s1, s2;
    cin >> s1 >> s2;
    map<char, ll> mp1, mp2;

    for (auto x : s1) {
      mp1[x]++;
    }
    for (auto x : s2) {
      mp2[x]++;
    }
    if (mp1.size() != mp2.size()) {
      cout << "NO" << "\n";
      ok = true;
    } else {
      for (auto x : mp1) {
        if (mp2.find(x.first) == mp2.end()) {
          cout << "NO" << "\n";
          ok = true;
          break;
        }
      }
      if (!ok)
        cout << "YES" << "\n";
    }
  }
}
