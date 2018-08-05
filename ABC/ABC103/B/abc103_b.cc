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
  string s, t;
  cin >> s >> t;
  bool isAns = false;
  ll n = s.size();
  rep(i, n) {
    s = s.substr(n - 1, 1) + s.substr(0, n - 1);
    if (t == s) isAns = true;
  }
  if (isAns) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
