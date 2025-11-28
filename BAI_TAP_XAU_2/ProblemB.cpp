#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s1, s2;
  cin >> s1 >> s2;
  map<char, ll> mp1, mp2;
  for (auto x : s1) {
    mp1[x]++;
  }
  for (auto x : s2) {
    mp2[x]++;
  }
  for (auto x : mp2) {
    // cout << x.first << " " << mp2[x.first] << "|" << mp1[x.first] << "\n";
    if (mp2[x.first] > mp1[x.first]) {
      cout << "IMPOSSIBLE";
      return 0;
    }
  }
  cout << "POSSIBLE";
}
