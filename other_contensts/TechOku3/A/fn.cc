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
  ll a, b;
  string c1, c2;
  cin >> c1 >> a;
  cin >> c2 >> b;
  if (c1 == "W") a *= -1;
  if (c2 == "W") b *= -1;

  cout << abs(a - b) / 15 << endl;
  return 0;
}
