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

  vector<pair<ll, ll>> a(n);
  rep(i, n) cin >> a.at(i).first;
  rep(i, n) cin >> a.at(i).second;
  ll maxa = 0;
  rep(i, n+1){
    ll suma=0;
    rep(j, n){

      if(j<=i) suma += a.at(j).first;
      if(j>=i) suma += a.at(j).second;
    }
    if(maxa < suma) maxa = suma;
  }
  cout << maxa << endl;
  return 0;
}