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
  ll n, h;
  cin >> n >> h;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a.at(i) >> b.at(i);

  ll maxa = *max_element(all(a));

  b.erase(remove_if(all(b), [&](const ll &i) { return i <= maxa; }), b.end());
  sort(b.rbegin(), b.rend());
  ll cnt = 0;
  for (const auto &i: b) {
    h -= i;
    ++cnt;
    if (h <= 0) break;
  }
  if (h > 0) cnt += h / maxa + (h % maxa == 0 ? 0 : 1);

  cout << cnt << endl;

  return 0;
}
