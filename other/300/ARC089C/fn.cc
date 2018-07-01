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

struct txy{
  ll t;
  ll x;
  ll y;
};

int main() {
  ll n;
  cin >> n;
  vector<txy> a(n+1);
  a.at(0).t=0;
  a.at(0).x=0;
  a.at(0).y=0;
  rep(i, n) cin >> a.at(i+1).t >> a.at(i+1).x >> a.at(i+1).y;
  bool isCan = true;
  rep(i, n){
    if(not isCan) break;
    ll dir = abs(a.at(i).y-a.at(i+1).y)+abs(a.at(i).x-a.at(i+1).x);
    ll tim = a.at(i+1).t-a.at(i).t;
    if(dir <= tim){
      isCan = dir%2 ==0;
      if(tim%2==1) isCan = not isCan;
    }else{
      isCan = false;
    }
  }
  if (isCan)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}