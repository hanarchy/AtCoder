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
  vector<ll> vv, a(n);
  rep(i, n) cin >> a.at(i);

  vector<ll> v(100000, 0);
  rep(i, n) ++v.at(a.at(i) - 1);
  v.erase(remove(all(v), 0), v.end());
  v.erase(remove(all(v), 1), v.end());
  ll sousa = 0;
  ll isExist2 = false;
  for (const auto &i : v) {
    sousa += (i - 1) / 2;
    if (i % 2 == 0) {
      if (not isExist2) ++sousa;
      isExist2 = not isExist2;
    }
  }
  cout << (n - sousa * 2) << endl;

  return 0;
}
