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
  vector<string> s(n);
  rep(i, n) cin >> s.at(i);

  vector<ll> v(26, 100000);
  rep(i, n){
    vector<ll> vt(26, 0);
    for(auto& c: s.at(i)) ++vt.at(c-'a');
    rep(j, 26) v.at(j) = min(v.at(j),vt.at(j));
  }
  string ans;
  rep(i, 26) rep(j, v.at(i)) ans.push_back('a'+i);
  cout << ans << endl;






  return 0;
}