#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 100000;

vector<bool> is_prime(MAXN + 1, true);
vector<int> special(MAXN + 1, 0);
vector<int> pref(MAXN + 1, 0);

void sieve() {
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= MAXN; i++)
    if (is_prime[i])
      for (int j = i * i; j <= MAXN; j += i)
        is_prime[j] = false;
}

void build() {
  sieve();

  // Case 1: 3^8
  long long pw = 6561; // 3^8
  if (pw <= MAXN)
    special[pw] = 1;

  for (int p = 2; p <= MAXN; p++) {
    if (!is_prime[p])
      continue;

    // --- Case 2: p^4 * 3  (q = 3)
    long long p4 = 1LL * p * p * p * p;
    if (p4 > MAXN)
      break;

    long long n1 = p4 * 3;
    if (n1 <= MAXN && p != 3)
      special[n1] = 1;

    // --- Case 2: 3^4 * p  (p = 3)
    long long n2 = 81LL * p;
    if (n2 <= MAXN && p != 3)
      special[n2] = 1;

    // --- Case 3: p^2 * 3^2  (q = 3)
    long long n3 = 9LL * p * p;
    if (n3 <= MAXN && p != 3)
      special[n3] = 1;
  }
  // Prefix sum
  for (int i = 1; i <= MAXN; i++)
    pref[i] = pref[i - 1] + special[i];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  build();

  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << "\n";
  }
}
