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
  ll h, w;
  cin >> h >> w;
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a.at(i);

  ll ii=0;
  rep(y, h) {
    vector<ll> v(w);
    rep(x, w){
      ll x_hat = y%2==0?x:w - x -1;
      if(a.at(ii)==0) ++ii;
      v.at(x_hat) = ii + 1;
      --a.at(ii);
    }
    rep(i, w){
      cout << v.at(i);
      if(i!=w-1) cout << " ";

    }
    cout << endl;
  }
  return 0;
}
