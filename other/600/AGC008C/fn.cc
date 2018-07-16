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

int main() {
  ios::sync_with_stdio(false);
  ll ai, ao, at, aj, al, as, az;
  cin >> ai >> ao >> at >> aj >> al >> as >> az;
  ll cnt = 0;

  cnt += ai - ai%2;
  cnt += ao;
  cnt += aj - aj%2;
  cnt += al - al%2;
  if (ai % 2 + aj % 2 + al % 2 == 2 and ai >0 and aj >0 and al >0) cnt += 1;
  else if (ai % 2 + aj % 2 + al % 2 == 3) cnt += 3;

  cout << cnt << endl;

  return 0;
}
