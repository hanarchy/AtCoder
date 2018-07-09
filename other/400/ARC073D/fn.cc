#include <cmath>
#include <cstdio>

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
  ll n, w_max;
  cin >> n >> w_max;
  vector<ll> w(n), v(n);
  rep(i, n) cin >> w.at(i) >> v.at(i);
  ll w0 = w.at(0);

  vector<vector<ll>> vv(4);
  rep(i, n) {
    w.at(i) -= w0;
    vv.at(w.at(i)).push_back(v.at(i));
  }
  rep(i, 4)sort(vv.at(i).rbegin(), vv.at(i).rend());
  ll ans = 0;
  rep(i0, vv.at(0).size() + 1) rep(i1, vv.at(1).size() + 1) rep(i2, vv.at(2).size() + 1) rep(i3, vv.at(3).size() + 1) {
          ll v_sum = 0;
          if (w0 * i0 + (w0 + 1) * i1 + (w0 + 2) * i2 + (w0 + 3) * i3 <= w_max) {
            rep(i, i0) v_sum += vv.at(0).at(i);
            rep(i, i1) v_sum += vv.at(1).at(i);
            rep(i, i2) v_sum += vv.at(2).at(i);
            rep(i, i3) v_sum += vv.at(3).at(i);
            ans = max(v_sum, ans);
          }
        }
  cout << ans << endl;

  return 0;
}
