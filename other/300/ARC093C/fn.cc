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
  vector<ll> a(n+2);
  a.at(0) = 0;
  a.at(n+1) = 0;
  rep(i, n) cin >> a.at(i+1);
  vector<ll> sa(n+1);
  rep(i, n+1){
    sa.at(i)=abs(a.at(i)-a.at(i+1));
  }
  ll sum=0;
  for (auto i: sa) sum += i;

  rep(i, n){

    cout << sum  -sa.at(i) -sa.at(i+1) +abs(a.at(i)-a.at(i+2)) << endl;
  }



  return 0;
}