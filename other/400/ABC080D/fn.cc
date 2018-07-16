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
  ll n, c;
  cin >> n >> c;

  vector<vector<ll>> req(30, vector<ll>(100001, 0));
  rep(i, n) {
    ll s, t, cc;
    cin >> s >> t >> cc;
    --cc;
    for (int j = s; j <= t; ++j) {
      req.at(cc).at(j)=1;
    }
  }

  vector<ll> sumrec(100001);
  rep(i, c) {
    rep(j, req.at(i).size()) {
      sumrec.at(j) += req.at(i).at(j);
    }
  }

  ll ans = *max_element(all(sumrec));

  cout << ans << endl;

  return 0;
}
