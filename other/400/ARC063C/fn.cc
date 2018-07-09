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
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);

  vector<ll> min_a(n);
  min_a.at(0) = a.at(0);
  for (int i = 1; i < n; ++i) {
    min_a.at(i) = min(min_a.at(i-1), a.at(i));
  }

  ll cnt = 0;
  ll bef_max = 0;


  for (int i = n - 1; i > 0; --i) {
    ll max_ = a.at(i) - min_a.at(i);
    if (bef_max < max_) {
      bef_max = max_;
      cnt = 1;
    } else if (bef_max == max_) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
