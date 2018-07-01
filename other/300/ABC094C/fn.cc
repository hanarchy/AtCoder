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
  vector<ll> x(n), v(n);
  rep(i, n) cin >> x.at(i);
  v = x;
  sort(all(v));
  size_t mid_h = x.size()/2;
  for (auto i:x){
    if(v.at(mid_h-1)>=i) cout << v.at(mid_h) << endl;
    else cout << v.at(mid_h -1) << endl;
  }

  return 0;
}