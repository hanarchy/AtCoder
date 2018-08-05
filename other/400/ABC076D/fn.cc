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
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  vector<ll> t(n), v(n);
  rep(i, n) cin >> t.at(i);
  rep(i, n) cin >> v.at(i);
  v.push_back(0);

  ll sumt = accumulate(all(t),0);
  vector<ll> va(sumt+1, 0);

  ll curti=0;
  rep(i, sumt+1){
    if(i>t.at(curti))++curti;
    sumt
  }




  return 0;
}
