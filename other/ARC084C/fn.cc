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
  vector<ll> a(n), b(n), c(n);
  rep(i, n) cin >> a.at(i);
  rep(i, n) cin >> b.at(i);
  rep(i, n) cin >> c.at(i);
  sort(all(a));
  sort(all(b));
  sort(all(c));


  vector<ll> fira(n), secb(n);
  rep(i, n) secb.at(i) = n-distance(c.begin(), upper_bound(all(c), b.at(i)));
  sort(all(secb));
  vector<ll> sumsecb(n+1);

  rep(i, n) sumsecb.at(i+1) = sumsecb.at(i) + secb.at(i);
  rep(i, n) fira.at(i) = n-distance(b.begin(), upper_bound(all(b), a.at(i)));


  ll sum = 0;
  for (const auto& i: fira){
    sum += sumsecb.at(i);
  }


  cout << sum << endl;
  return 0;
}