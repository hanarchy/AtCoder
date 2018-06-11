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
  ll n;
  cin >> n;

  vector<ll> v;
  v.push_back(1);
  ll a=1;
  while(true){
    a*=6;
    if(a>100000)break;
    v.push_back(a);
  }
  a=1;
  while(true){
    a*=9;
    if(a>100000)break;
    v.push_back(a);
  }

  sort(v.begin(),v.end());

  vector<ll> dp(n+1,1e9);
  dp[0] = 0;
  rep(i,v.size()){
    for (ll j = 0; j + v[i] <= n; ++j) {
      dp[j+v.at(i)] = min(dp[j]+1, dp[j+v[i]]);
    }
  }
  cout << dp[n] << endl;


  return 0;
}