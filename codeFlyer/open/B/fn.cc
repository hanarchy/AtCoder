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
typedef long long int ll;

int main() {
  ios::sync_with_stdio(false);
  ll n, q;
  cin >> n >> q;

  vector<ll> x(n), c(q), d(q);
  rep(i, n) cin >> x.at(i);
  rep(i, q) cin >> c.at(i) >> d.at(i);

  sort(all(x));
  vector<ll> sums(n + 1), rsums(n + 1);
  sums.at(0) = 0;
  rep(i, n) sums.at(i + 1) = sums.at(i) + x.at(i);

  rep(i, q) {
    auto itrl = lower_bound(all(x), -d.at(i) + c.at(i));
    auto itrc = lower_bound(all(x), c.at(i));
    auto itrr = lower_bound(all(x), d.at(i) + c.at(i));

    ll disc = distance(x.begin(), itrc);
    ll disl = distance(x.begin(), itrl);
    ll disr = distance(x.begin(), itrr);

    ll ans = 0;
    ans += (n - disr + disl) * d.at(i);
    ans += c.at(i) * (disc - disl) - (sums.at(disc) - sums.at(disl));
    ans -= c.at(i) * (disr - disc) - (sums.at(disr) - sums.at(disc));

    cout << ans << endl;

  }

  return 0;
}