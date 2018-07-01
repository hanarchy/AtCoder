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
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);

  ll ans=0;
  // fisrt and end
  if(a.at(0)-x>0) {
    ans+=a.at(0)-x;
    a.at(0) = x;
  }
  if(a.at(n-1)-x>0) {
    ans+=a.at(n-1)-x;
    a.at(n-1) = x;
  }

  // ruisekiwa
  vector<ll> sums(n-1);
  rep(i, n-1) sums.at(i) = a.at(i) + a.at(i+1);

  for (int j = 0; j < n-1; ++j) {
    if(sums.at(j)>x){
      ans += sums.at(j)-x;
      if(j!=n-2) sums.at(j+1) -= (sums.at(j)-x);
    }
  }

  cout << ans << endl;
  return 0;
}