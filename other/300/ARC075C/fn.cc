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
  vector<ll> s(n);
  rep(i, n) cin >> s.at(i);

  vector<ll> v, v10;
  rep(i, n) {
    if (s.at(i) % 10 != 0) v.push_back(s.at(i));
    else v10.push_back(s.at(i));
  }
  ll ans = 0;

  if (v.size() != 0) {
    sort(all(v));
    ans = accumulate(all(v), 0);
    if (ans % 10 == 0) ans -= v.at(0);
    ans += accumulate(all(v10), 0);
  }

  cout << ans << endl;

  return 0;
}