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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);

  sort(all(a));
  ll lhf = *max_element(all(a));
  ll rhf_abs=100000000000000007;
  ll rhf =0;
  rep(i, lhf%2 +1){
    ll lhfdiv2 = lhf/2 + i;
    rep (i, n) {
      if (rhf_abs > abs(a.at(i)-lhfdiv2)){
        rhf_abs = min(rhf_abs, abs(a.at(i) - lhfdiv2));
        rhf = a.at(i);
      }
    }
  }
  cout << lhf << " " << rhf << endl;


  return 0;
}
