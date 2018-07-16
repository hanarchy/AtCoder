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

  ll n, m;
  cin >> n >>m;

  vector<ll> ko(n,1);
  vector<ll> kanosei(n,0);
  kanosei.at(0) = 1;

  ll x, y;
  rep(i, m){
    cin >> x >> y;
    --x; --y;
    --ko.at(x);
    ++ko.at(y);
    if(kanosei.at(x) == 1) kanosei.at(y) = 1;
    if(ko.at(x) == 0) kanosei.at(x) =0;
  }
  ll cnt=0;
  for (const auto& i : kanosei){
    if(i==1) ++ cnt;
  }

  cout << cnt << endl;






  return 0;
}
