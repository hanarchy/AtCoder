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
  ll n;
  cin >> n;
  map<ll, ll> rp;
  vector<ll> p(n);
  rep(i, n) {
    ll u;
    cin >> u;
    --u;
    rp[u] = i;
    p.at(i) = u;
  }

  ll s = p.at(0);
  vector<ll> a(n), b(n);
  a.at(s) = 0;
  b.at(s) = 0;
  for (int i = s + 1; i < n; ++i) {
    if (rp.at(i) > rp.at(i - 1)) {
      b.at(i) = b.at(i - 1) - 1;
      a.at(i) = rp.at(i) - b.at(i);
    } else {
      a.at(i) = a.at(i - 1) + 1;
      b.at(i) = rp.at(i) - a.at(i);
    }
  }
  for (int i = s - 1; i >= 0; --i) {
    if (rp.at(i) < rp.at(i + 1)) {
      b.at(i) = b.at(i + 1) + 1;
      a.at(i) = rp.at(i) - b.at(i);
    } else {
      a.at(i) = a.at(i + 1) - 1;
      b.at(i) = rp.at(i) - a.at(i);
    }

  }

  ll minab = min(*min_element(all(a)), *min_element(all(b)));
  rep(i, n) {
    cout << a.at(i) - minab + 1 << " ";
  }
  cout << endl;
  rep(i, n) {
    cout << b.at(i) - minab + 1 << " ";
  }
  cout << endl;

  return 0;
}
