#include <cmath>
#include <cstdio>
#include <limits>
#include <tuple>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

void yesorno(bool ans) {
  if (ans) cout << "yES" << endl;
  else cout << "nO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  size_t n = s.size();
  ll sum = 0, sumb = 0, suma = 0;
  rep(i, n) {
    ll di = int(s.at(i) - '0');
    sum += di;
    if (i % 2 == 0)sumb += di;
    else suma += di;
  }
  ll las = int(s.at(n - 1) - '0');
  yesorno(sum % 3 == 0 and las % 2 == 0);
  yesorno(abs(suma - sumb) % 11 == 0);

  return 0;
}
