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
  vector<vector<ll>> c(3, vector<ll>(3));
  rep(i, 3) rep(j, 3) {
      cin >> c.at(i).at(j);
    }
  bool isMiss = true;
  rep(j, 2) {

    ll bmb = c.at(0).at(j) - c.at(0).at(j + 1);
    rep(i, 2) {
      ll tmpbmb = c.at(i + 1).at(j) - c.at(i + 1).at(j + 1);
      if (bmb != tmpbmb) isMiss = false;
    }
  }
  rep(i, 2) {

    ll bmb = c.at(i).at(0) - c.at(i + 1).at(0);
    rep(j, 2) {
      ll tmpbmb = c.at(i).at(j + 1) - c.at(i + 1).at(j + 1);
      if (bmb != tmpbmb) isMiss = false;
    }
  }

  if (isMiss) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
