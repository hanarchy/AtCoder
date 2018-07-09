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
  vector<ll> p(n), v(n);
  rep(i, n) {
    cin >> p.at(i);
    --p.at(i);
    v.at(i) = p.at(i)==i ? 1:0;
  }
  vector<ll> vv;
  ll cnt=0;
  rep(i, n) {
    if (v.at(i)==0) {
      vv.push_back(cnt);
      cnt=0;
    }else ++cnt;
  }
  vv.push_back(cnt);
  vv.erase(remove(all(vv), 0), vv.end());
  ll ans=0;
  for (const auto& i: vv){
    ans += i/2 + i%2;
  }

  cout << ans << endl;


  return 0;
}
