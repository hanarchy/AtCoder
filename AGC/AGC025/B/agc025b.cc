// WA & TLE

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

#include <exception>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

ll n_c_r(const ll &n, const ll &r) {
  ll retval;
  if ((n - r) != 0 && r != 0)
    retval = static_cast<ll>(tgamma(n + 1) / tgamma(n - r + 1) / tgamma(r + 1));
  else
    retval = 1;
  return retval;
};

int main() {
  ll n, a, b, k;
  cin >> n >> a >> b >> k;
  ll nr=(k/a>n?n:k/a), nb, ng=k/(a+b), no;
  vector<ll> v(n+1);
  iota(v.begin(),v.end(),0);
  for (auto && i : v){
    i*=(a+b);
  }
  ll cnt =0;
  rep(ir, n+1){
    nb = ((k-ir*a)/b>n?n-ir:(k-ir*a)/b);
    rep(ib, n+1-ir){
      if (binary_search(v.begin(),v.end(),k-(ir*a+ib*b))){
        ll ig = (k-(ir*a+ib*b))/(a+b);
        cnt += n_c_r(n, ir) * n_c_r(n-ir, ib) * n_c_r(n-ir-ib,ig);
        break;
      }
    }
  }

  cout << cnt<<endl;



}