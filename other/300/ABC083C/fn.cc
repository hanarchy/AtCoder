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
  ll a, b, c, d ,e, f;
  cin >> a >> b >> c >> d >> e >> f;
  double noudod=-1;
  double sugard = -1, sum = -1;
  rep(ia, 30) rep(ib, 30){
    ll water = a*ia + b*ib;
    if(100*water>f) break;

    rep(ic, 3000){
      ll id=0;
      while(100*water + c*ic + d*id <=f && (c*ic+d*id)<=e*water) ++id;
      --id;if(id==-1) break;
      double sugar = c*ic + d*id;
      if(sugar>e*water) break;

      double noudo = 1.0/(0.01+water/sugar);
      if(noudo>noudod){
        noudod = noudo;
        sum = sugar + water*100;
        sugard = sugar;
      }
    }

  }
  cout << sum << " " << sugard << endl;

  return 0;
}