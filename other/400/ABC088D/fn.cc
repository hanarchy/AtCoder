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
  vector<string> s(h);
  rep(i, h) cin >> s.at(i);

  vector<ll> dx{1, 0, -1, 0};
  vector<ll> dy{0, 1, 0, -1};
  const ll inf = 10000000000000000;
  queue<pair<ll, ll>> que;
  que.push(make_pair(0, 0));
  vector<vector<ll>> d(h, vector<ll>(w, inf));
  d.at(0).at(0) = 0;

  while (que.size()) {
    pair<ll, ll> p = que.front();
    que.pop();

    if (p.first == w - 1 and p.second == h - 1) break;

    for (int i = 0; i < 4; ++i) {
      ll nx = p.first + dx.at(i), ny = p.second + dy.at(i);
      if (0 <= nx and nx < w and 0 <= ny and ny < h and s.at(ny).at(nx) != '#' and d.at(ny).at(nx) == inf) {
        que.push(make_pair(nx, ny));
        d.at(ny).at(nx) = d.at(p.second).at(p.first) + 1;
      }
    }

  }

  ll firsharp = 0;
  rep(i, h) rep(j, w) {
      if (s.at(i).at(j) == '#') ++firsharp;
    }
  if (d.at(h - 1).at(w - 1) != inf and s.at(0).at(0) != '#') {
    ll ans = h * w - d.at(h - 1).at(w - 1) - 1 - firsharp;
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
