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

  vector<ll> p(n);
  ll sumcnt=1000000;
  rep(i,n){
    cin >> p.at(i);
    ll cnt=0;
    while(p.at(i)%10==0){
      ++cnt;
      p.at(i) /= 10;
    }
    sumcnt = min(sumcnt, cnt);
  }
  cout << sumcnt <<endl;

  return 0;
}