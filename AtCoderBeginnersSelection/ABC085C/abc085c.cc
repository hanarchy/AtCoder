#include <cmath>
#include <cstdio>

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
  ll n, y;
  cin >> n >> y;
  bool flag = false;

  rep(i, n + 1) {
    if (flag) break;
    rep(j, n + 1 - i) {
      if (flag) break;
      if (y == 9000 * i + 4000 * j + 1000 * n) {
        flag = true;
        cout << i << " " << j << " " << n - i - j << endl;
      }
    }
  }

  if (!flag)
    cout << "-1 -1 -1" << endl;

  return 0;
}