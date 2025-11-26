#include <bits/stdc++.h>
using namespace std;

int ascii(int x) {
  int ma_ascii_dao_nguoc = 0;
  int tam = x;
  for (int i = 0; i < 8; ++i) {
    if (tam & (1 << i)) {
      ma_ascii_dao_nguoc |= (1 << (7 - i));
    }
  }
  return ma_ascii_dao_nguoc;
}

char giai_ma_ky_tu(char ky_tu_da_ma_hoa) {
  int ma_ascii_goc = (int)ky_tu_da_ma_hoa;
  int ma_ascii_dao_nguoc = ascii(ma_ascii_goc);
  if (ma_ascii_dao_nguoc <= 33 || ma_ascii_dao_nguoc >= 126) {
    return ky_tu_da_ma_hoa;
  } else {
    return (char)ma_ascii_dao_nguoc;
  }
}

string giai_ma_tin_nhan(const string &tin_nhan_da_ma_hoa) {
  string tin_nhan_da_giai_ma = "";
  for (char ky_tu : tin_nhan_da_ma_hoa) {
    tin_nhan_da_giai_ma += giai_ma_ky_tu(ky_tu);
  }
  return tin_nhan_da_giai_ma;
}

int main() {
  string tin_nhan_da_ma_hoa;
  long long n = 1;
  while (n == 1) {
    getline(cin, tin_nhan_da_ma_hoa);
    string tin_nhan_da_giai_ma = giai_ma_tin_nhan(tin_nhan_da_ma_hoa);
    cout << tin_nhan_da_giai_ma << endl;
  }
}
