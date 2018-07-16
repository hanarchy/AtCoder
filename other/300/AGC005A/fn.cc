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
  string x;
  cin >> x;

  size_t n = x.size();
  ll cnt = 0;
  ll scnt = 0, tcnt = 0;

  rep(i, n) {
    if (x.at(i) == 'S') ++scnt;
    else ++tcnt;

    if (scnt > 0 and x.at(i) == 'T') {
      cnt += 2;
      --scnt;
      --tcnt;
    }
  }

  cout << n - cnt << endl;

  return 0;
}
