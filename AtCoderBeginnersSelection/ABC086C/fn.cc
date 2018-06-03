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
struct pos {
  ll x = 0;
  ll y = 0;
  ll pret = 0;
};
int main() {
  ll n;
  cin >> n;
  ll t, x, y;
  pos c_pos;
  bool flag = true;
  rep(i, n) {
    cin >> t >> x >> y;
    if ((t-c_pos.pret) >= abs(x - c_pos.x) + abs(y - c_pos.y) && ((t-c_pos.pret) - (x - c_pos.x) - (y - c_pos.y)) % 2 == 0) {
      c_pos.x = x;
      c_pos.y = y;
      c_pos.pret = t;
    } else {
      flag = false;
      break;
    }
  }
  cout << (flag? "Yes" : "No") << endl;
  return 0;
}