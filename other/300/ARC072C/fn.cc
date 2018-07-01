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

  vector<ll> sumv(n);
  sumv.at(0) = a.at(0);
  rep(i, n - 1) sumv.at(i + 1) = sumv.at(i) + a.at(i + 1);

  ll ans = 1000000000000000000;
  vector<ll> p{1, -1};
  rep(i, 2) {
    ll ans1 = 0;
    ll sousa = 0;
    rep(j, n) {
      if (p.at((i + j) % 2) == 1) {
        if (sumv.at(j) + sousa < 1) {
          ans1 += abs(1 - (sumv.at(j) + sousa));
          sousa += 1 - (sumv.at(j) + sousa);
        }
      } else {
        if (sumv.at(j) + sousa > -1) {
          ans1 += abs(1 + (sumv.at(j) + sousa));
          sousa -= 1 + (sumv.at(j) + sousa);
        }
      }
    }
    ans = min(ans, ans1);
  }
  cout << ans << endl;

  return 0;
}