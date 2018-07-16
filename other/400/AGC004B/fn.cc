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

  ll n, x;
  cin >> n >> x;
  vector<ll> rsumx(n), a(n);
  rsumx.at(0) = 0;
  rep(i, n-1) rsumx.at(i+1) = rsumx.at(i) + x;
  rep(i, n) cin >> a.at(i);

  ll ans =0;
  ll maxind =0;
  rep(i, n){
    ll mintime=1000000000000000000;
    ll tar_a;
    ll minind=0;
    rep(j, n){
      ll index = i-j<0 ? i+n-j:i-j;
      if(rsumx.at(index) + a.at(j) < mintime){
        mintime = rsumx.at(index) + a.at(j);
        minind = index;
        tar_a = a.at(j);
      }else if(rsumx.at(index) + a.at(j) == mintime and index < minind){
        minind = index;
        tar_a = a.at(j);
      }
    }
    maxind = max(minind, maxind);
    ans += tar_a;
  }
  ans += maxind * x;
  cout << ans << endl;



  return 0;
}
