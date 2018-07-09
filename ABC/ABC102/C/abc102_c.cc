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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) {cin >> a.at(i); a.at(i)-=i+1;};
  sort(all(a));
  if(n%2==0)
//  vector<ll>  sums(n+1);
//  sums.at(0) =0;
//  rep(i, n) sums.at(i+1)= a.at(i) + sums.at(i);
//  ll sum;
//  ll ans = 1000000000000000000;
//  rep(i, n+1){
//    sum = sums.at(n) - sums.at(i)*2;
//    ll b;
//    if(i==0) b= a.at(0);
//    else if(i==n) b = a.at(n-1)/(n-2*i);
//    else if((i*2<n && sum>0 )or (i*2>=n &&sum<=0)) b = a.at(i);
//    else b=a.at(i-1);
//    ans = min(ans, abs(sum-b*(n-2*i)));
//
//  }

  ll sum;
  rep(ii, 3){
    sum  =0;
    rep(i, n)
      sum += abs(a.at(i)-(b+ii-1));
    ans = min(sum, ans);
  }
  cout << ans << endl;

  return 0;
}