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
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll h, w;
  cin >> h >> w;
  ll n = 10;

  vector<vector<ll>> v(n, vector<ll>(n));

  rep(i, n) rep(j, n) cin >> v.at(i).at(j);
  ll inf = 1000000000000000000;
  vector<ll> dp(n, inf);
  rep(i, n) dp.at(i) = v.at(i).at(1);

  rep(_, n) {
    rep(i, n) {
      rep(j, n) {
        if (j != 1 and j != i) dp.at(i) = min(dp.at(i), v.at(i).at(j) + dp.at(j));
      }
    }
  }
  ll cnt = 0;
  rep(i, h) {
    rep(j, w) {
      ll a;
      cin >> a;
      if (a == -1) continue;
      else cnt += dp.at(a);
    }
  }
  cout << cnt << endl;

  return 0;
}
