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
  string su, sl;
  cin >> su;
  cin >> sl;

  ll inf = 1000000007;

  ll cnt =1;
  ll istart;
  bool isBefTate;
  if(su[0]==sl[0]){
    cnt *= 3;
    isBefTate = true;
    istart =1;
  }
  else{
    cnt *= 6;
    isBefTate = false;
    istart = 2;
  }
  for (int i = istart; i < n; ++i) {
    if(su[i]==sl[i]){
      if(isBefTate) cnt*=2;
      isBefTate=true;
    }else{
      ++i;
      if (isBefTate) cnt *= 2;
      else cnt *= 3;
      isBefTate = false;
    }
    if(cnt>=inf) cnt =cnt % inf;
  }
  cout << cnt%inf << endl;

  return 0;
}
