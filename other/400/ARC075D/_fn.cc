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
  ll n, a, b;
  cin >> n >> a >> b;
  vector<ll> h(n);
  rep(i, n) cin >> h.at(i);

  sort(h.rbegin(), h.rend());
  vector<ll> dp(n);
  dp.at(0) = h.at(0)/a + (h.at(0)%a==0?0:1);
  for (int j = 1; j < n; ++j) {
    if(h.at(j) < b*dp.at(j-1))
      dp.at(j) = dp.at(j-1);
    else dp.at(j) = dp.at(j-1) + (h.at(j)-b*dp.at(j-1))/a + ((h.at(j)-b*dp.at(j-1))%a ==0 ? 0:1);
  }
  cout << dp.at(n-1) << endl;

  return 0;
}
