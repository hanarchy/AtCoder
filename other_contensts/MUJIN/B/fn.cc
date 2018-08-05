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
  ll a;
  cin >> a;
  string s;
  cin >> s;
  bool flag = false;
  if (a == 0) flag = true;

  rep(i, s.size()) {
    if (s.at(i) == '+') {
      ++a;
    } else {
      --a;
    }
    if (a == 0) flag = true;
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
