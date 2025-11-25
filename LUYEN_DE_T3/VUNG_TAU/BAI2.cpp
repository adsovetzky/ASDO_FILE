#include <bits/stdc++.h>
using namespace std;

#define ll long long

unsigned long long nhiPhanSangSo(const string &chuoiBit) {
  unsigned long long giaTri = 0;
  for (char bit : chuoiBit)
    giaTri = (giaTri << 1) + (bit - '0');
  return giaTri;
}

float Q_rsqrt(float number) {
  int32_t i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y = number;

  memcpy(&i, &y, sizeof(float));
  i = 0x5f3759df - (i >> 1);
  memcpy(&y, &i, sizeof(float));

  y = y * (threehalfs - (x2 * y * y));

  return y;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string A, B;
  cin >> A >> B;

  ll a = nhiPhanSangSo(A);
  ll b = nhiPhanSangSo(B);

  int cnt = 0;

  for (ll i = a; i <= b; i++) {
    float inv = Q_rsqrt((float)i);
    float root = 1.0f / inv;

    ll r = (ll)round(root);

    if (r * r == i)
      cnt++;
  }

  cout << cnt;
}
