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
  rep(i,n) cin >> a.at(i);
  vector<ll> sums(n);
  sums.at(0) = a.at(0);
  rep(i, n-1) sums.at(i+1) = a.at(i+1) + sums.at(i);

  ll sumsdiv4 = accumulate(all(a),0)/4;
  ll ans = 100000000000000;
  rep(i,3) rep(j, 3) rep(k, 3){
        ll ind1 = distance(sums.begin(), lower_bound(all(sums), sumsdiv4));
        ll ind2 = distance(sums.begin(), lower_bound(all(sums), sumsdiv4 * 2));
        ll ind3 = distance(sums.begin(), lower_bound(all(sums), sumsdiv4 * 3));
        vector<ll> v{sums.at(ind1+i), sums.at(ind2+j)-sums.at(ind1+i), sums.at(ind3+k)-sums.at(ind2+j), sums.at(n-1)-sums.at(ind3+k)};
        ans = min(ans, *max_element(all(v))-*min_element(all(v)));
  }
  cout << ans << endl;

  return 0;
}