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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a.at(i);
  ll cnt = 0;
  rep(i, n - 1) {
    if (a.at(i) == a.at(i + 1)) {
      ++i;
      ++cnt;
    }

  }
  cout << cnt << endl;

  return 0;
}
