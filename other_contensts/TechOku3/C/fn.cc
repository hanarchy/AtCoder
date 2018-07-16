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

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  ll n, p;
  cin >> n >> p;

  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);
  ll j = 0;
  ll pis = 1;
  bool isCan = false;
  rep(i, n) {
    while (true) {
      if (j == n) break;
      pis *= a.at(j);
      if (pis >= p) break;
      ++j;
    }
    if (pis == p) {
      isCan = true;
      break;
    }
    if (j == n) break;
    pis /= a.at(i);
    pis /= a.at(j);
  }
  if (isCan) cout << "Yay!" << endl;
  else cout << ":(" << endl;

  return 0;
}
