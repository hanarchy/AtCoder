#include <cmath>
#include <cstdio>

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
  ll a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  rep(i, a + 1) {
    rep(j, b + 1) {
      rep(k, c + 1) {
        if (i * 500 + j * 100 + k * 50 == x) {
          ++cnt;
        }
      }
    }
  }
  cout << cnt;

  return 0;
}