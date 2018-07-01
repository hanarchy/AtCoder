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
  ll n, t;
  cin >> n >> t;
  vector<ll> vt(n);
  rep(i, n) cin >> vt.at(i);

  vector<ll> v(n);
  rep(i, n-1) v.at(i) = vt.at(i+1) -vt.at(i);
  v.at(n-1) = t;
  for (auto &i : v){
    if(i>=t) i=t;
  }
  ll sum = accumulate(all(v), 0);

  cout << sum << endl;
  return 0;
}