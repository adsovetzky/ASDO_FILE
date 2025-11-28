#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  stack<int> st;
  st.push(-1);

  ll maxlen = 0;
  ll cnt = 0;

  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '(') {
      st.push(i);
    } else {
      st.pop();
      if (st.empty()) {
        st.push(i);
      } else {
        ll len = i - st.top();

        if (len > maxlen) {
          maxlen = len;
          cnt = 1;
        } else if (len == maxlen) {
          cnt++;
        }
      }
    }
  }

  if (maxlen == 0)
    cout << "0 1";
  else
    cout << maxlen << " " << cnt;

  return 0;
}
