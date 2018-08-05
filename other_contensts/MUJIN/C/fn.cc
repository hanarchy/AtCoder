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
  ll n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s.at(i);

  vector<vector<vector<ll>>> dir1(2, vector<vector<ll>>(n, vector<ll>(m, 0)));
  vector<vector<vector<ll>>> dir2(2, vector<vector<ll>>(m, vector<ll>(n, 0)));
  for (int i = 0; i < n; ++i) {
    dir1.at(0).at(i).at(0) = (s.at(i).at(0) == '#' ? 1 : 0);
    for (int j = 1; j < m; ++j) {
      dir1.at(0).at(i).at(j) = (s.at(i).at(j) == '#' ? 1 : 0) + dir1.at(0).at(i).at(j - 1);
    }
  }

  for (int j = 0; j < m; ++j) {
    dir2.at(0).at(j).at(0) = (s.at(0).at(j) == '#' ? 1 : 0);
    for (int i = 1; i < n; ++i) {
      dir2.at(0).at(j).at(i) = (s.at(i).at(j) == '#' ? 1 : 0) + dir2.at(0).at(j).at(i - 1);
    }
  }

//  for (int i = 0; i < n; ++i) {
//    dir1.at(1).at(i).at(0) = (s.at(i).at(m - 1) == '#' ? 1 : 0);
//    for (int j = m - 2; j >= 0; --j) {
//      dir1.at(1).at(i).at(m - j - 1) = (s.at(i).at(j) == '#' ? 1 : 0) + dir1.at(1).at(i).at(m - j - 2);
//    }
//  }
//
//  for (int j = 0; j < m; ++j) {
//    dir2.at(1).at(j).at(0) = (s.at(n - 1).at(j) == '#' ? 1 : 0);
//    for (int i = n - 2; i >= 0; --i) {
//      dir2.at(1).at(j).at(n - i - 1) = (s.at(i).at(j) == '#' ? 1 : 0) + dir2.at(1).at(j).at(n - i - 2);
//    }
//  }



  ll cnt = 0;
  rep(si, n) rep(sj, m) {
      if (s.at(si).at(sj) == '#') continue;
      ll dis11 =
          distance(lower_bound(all(dir1.at(0).at(si)), dir1.at(0).at(si).at(sj)), dir1.at(0).at(si).begin() + sj) - 1;
      ll dis12 =
          abs(distance(upper_bound(all(dir1.at(0).at(si)), dir1.at(0).at(si).at(sj)), dir1.at(0).at(si).begin() + sj))
              - 1;

      ll dis21 =
          distance(lower_bound(all(dir2.at(0).at(sj)), dir2.at(0).at(sj).at(si)), dir2.at(0).at(sj).begin() + si) - 1;
      ll dis22 =
          abs(distance(upper_bound(all(dir2.at(0).at(sj)), dir2.at(0).at(sj).at(si)), dir2.at(0).at(sj).begin() + si))
              - 1;
      if (dis11 < 0) dis11 = 0;
      if (dis12 < 0) dis12 = 0;
      if (dis21 < 0) dis21 = 0;
      if (dis22 < 0) dis22 = 0;

      cout << dis11 +dis12 << " " << dis21 + dis22 << endl;
      cnt += (dis11 + dis12) * (dis21 + dis22);
    }

  cout << cnt << endl;

  return 0;
}
