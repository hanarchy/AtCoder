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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);

  vector<ll> cntv(n);
  rep(i, n) ++cntv.at(a.at(i));
  ll mods = 1000000007;
  ll ans = 1;
  bool isLast0 = false;
  rep(i, cntv.size()) {
    if (cntv.at(i) == 2 and isLast0) {
      ans *= 2;
      isLast0 = false;
    } else if (cntv.at(i) == 0 and not isLast0) {
      isLast0 = true;
    } else if (cntv.at(i) == 1 and i == 0 and n % 2 == 1) {
      ans = 1;
    } else {
      ans = 0;
      break;
    }
    ans = ans % mods;

  }
  cout << ans << endl;
  return 0;
}