#include <cmath>
#include <cstdio>
#include <limits>
#include <tuple>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>
#include <iomanip>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  vector<ll> v;
  v.push_back(abs(a1 - a2));
  v.push_back(abs(a1 - a3));
  v.push_back(abs(a3 - a2));
  sort(all(v));
  ll ans = v.at(0) + v.at(1);

  cout << ans << endl;

  return 0;
}
