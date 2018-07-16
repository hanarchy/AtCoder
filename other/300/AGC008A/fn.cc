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
  ll x, y;
  cin >> x >> y;
  ll cnt = abs(abs(x) - abs(y));
  if ((x > 0 and y < 0) or (x < 0 and y > 0)) ++cnt;
  if (x > y and x <= 0 and y <= 0) cnt += 2;
  if (x > y and x >= 0 and y >= 0) cnt += 2;
  if (x > 0 and y == 0) --cnt;
  if (x == 0 and y < 0) --cnt;
  cout << cnt << endl;
  return 0;
}
