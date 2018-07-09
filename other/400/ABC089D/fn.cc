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

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll h, w, d;
  cin >> h >>w >> d;
  vector<pair<ll,ll>> a(h*w);
  rep(i, h){
    rep(j, w){
      ll tm;
      cin >> tm;
      --tm;
      a.at(tm).first = j;
      a.at(tm).second = i;
    }
  }

  // ruisekiwa
  vector<ll> score(h*w);
  rep(i, d) score.at(i) = 0;
  for (int i = d; i < h * w; ++i) {
    score.at(i) = score.at(i-d) + abs(a.at(i).first-a.at(i-d).first) + abs(a.at(i).second - a.at(i-d).second);
  }


  ll q;
  cin >> q;

  rep(i, q){
    ll l, r;
    cin >> l >> r;
    --l; --r;
    cout << score.at(r) - score.at(l) << endl;
  }

  return 0;
}
