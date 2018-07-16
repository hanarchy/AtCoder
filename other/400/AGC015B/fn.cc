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
  string s;
  cin >> s;
  size_t n = s.size();
  ll ans = 0;
  rep(i, n) {
    if (s.at(i) == 'U') ans += 1 * (n - 1 - i) + 2 * i;
    else ans += 2 * (n - 1 - i) + 1 * i;
  }
  cout << ans << endl;

  return 0;
}
