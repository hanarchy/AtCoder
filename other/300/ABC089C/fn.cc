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
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  string s;
  vector<ll> march(5, 0);
  rep(i, n){
    cin >> s;
    if(s[0]=='M') ++march.at(0);
    if(s[0]=='A') ++march.at(1);
    if(s[0]=='R') ++march.at(2);
    if(s[0]=='C') ++march.at(3);
    if(s[0]=='H') ++march.at(4);
  }
  ll ans =0;
  rep(i, 5) rep(j, i) rep(k, j) ans += march.at(i)*march.at(j)*march.at(k);


  cout << ans << endl;



  return 0;
}
