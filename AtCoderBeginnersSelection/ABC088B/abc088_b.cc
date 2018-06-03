#include <cmath>
#include <cstdio>

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

int main(){
  uint32_t n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(all(a), greater<ll>());
  ll alice=0, bob=0;
  rep(i, n){
    if(i%2==0) alice += a[i];
    else bob += a[i];
  }
  cout << alice - bob << endl;


  return 0;
}