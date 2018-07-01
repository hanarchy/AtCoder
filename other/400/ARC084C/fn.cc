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
  ll h, w;
  cin >> h >> w;
  vector<ll> v{h, w, h};

  ll ans = 10000000000000000;
  if (h % 3 == 0 or w % 3 == 0) ans = 0;
  else ans = min(ans, min(h, w));

  rep(i, 2) {
    ll au = v.at(i) % 2 == 0 ? v.at(i) / 2 : v.at(i) / 2 + 1;
    ll al = v.at(i) % 2 == 0 ? v.at(i) / 2 : v.at(i) / 2;
    for (int j = 1; j < v.at(i + 1); ++j) {
      ans = min(ans, max(v.at(i) * j, (v.at(i + 1) - j) * au) - min(v.at(i) * j, (v.at(i + 1) - j) * al));
    }
  }
  cout << ans << endl;

  return 0;
}